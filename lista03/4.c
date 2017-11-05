#include <stdio.h>
#include <stdlib.h>

/* Definição do números de linhas e colunas, comum a todos os casos do exercício */
#define L 3
#define C 3

/* Encontra a transposta de uma matriz */
int ** transposta(int ** M)
{
    int i, j;

    int ** W = malloc(sizeof(int *)*C);
    for (i=0; i<L; i++) W[i] = malloc(sizeof(int)*L);

    for (i=0; i<C; i++) {
        for (j=0; j<L; j++) {
            *(*(W+i)+j) = *(*(M+j)+i);
        }
    }
    return W;
}

/* Imprime uma matriz 3x3 */
void print_matriz(int ** M)
{
    int i, j;
    for (i=0; i<L; i++) {
        for (j=0; j<C-1; j++) {
            printf("%d ", *(*(M+i)+j));
        }
        printf("%d\n", *(*(M+i)+j));
    }
}

int main()
{
    int ** M;
    int i;
    M = malloc(sizeof(int *)*L);
    for (i=0; i<C; i++) M[i] = malloc(sizeof(int)*C);


    scanf("%d %d %d", &M[0][0], &M[0][1], &M[0][2]);
    scanf("%d %d %d", &M[1][0], &M[1][1], &M[1][2]);
    scanf("%d %d %d", &M[2][0], &M[2][1], &M[2][2]);

    print_matriz(transposta(M));


    for (i=0; i<L; i++) free(M[i]);
    free(M);

    return 0;
}
