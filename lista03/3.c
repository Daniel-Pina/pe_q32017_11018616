#include <stdio.h>
#include <stdlib.h>

/*
 * Soma dois vetores da forma:
 * v3[k] = v1[k] + v2[k]
 */
int * soma_vetor(int * v1, int * v2)
{
    int i, size;
    size = 5;
    int * v3;
    v3 = malloc(size*sizeof(int));
    for (i=0; i<size; i++) {
        *(v3+i) = *(v1+i) + *(v2+i);
    }
    return v3;
}

/* Imprime um array */
void print_vetor(int * v)
{
    int i, size;
    size = 5;
    for (i=0; i<size-1; i++) {
        printf("%d ", *(v+i));
    }
    printf("%d\n", *(v+size-1));
}

int main()
{
    int v1[5];
    int v2[5];
    scanf("%d %d %d %d %d", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]);
    scanf("%d %d %d %d %d", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);

    print_vetor(soma_vetor(v1, v2));

    return 0;
}
