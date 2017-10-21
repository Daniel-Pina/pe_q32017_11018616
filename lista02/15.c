#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Função que imprime as hastes (debug) */
void p_hastes_d(int n, int * origem, int * auxiliar, int * destino)
{
    int i;
    for (i=0; i<n; i++) {
    printf("111\n");
        printf("%d ", origem[1]);
    printf("222\n");
    }
    printf("333\n");
    printf("\n");
    for (i=0; i<n; i++) {
        printf("%d ", auxiliar[i]);
    }
    printf("\n");
    for (i=0; i<n; i++) {
        printf("%d ", destino[i]);
    }
    printf("\n\n");
}

/* Função que imprime a solução (debug) */
void p_solucao_d(int n, char ** solucao)
{
    int i, movimentos;
    movimentos = pow(2, n) - 1;
    for (i=0; i<movimentos-1; i++) {
        printf("%c-%c, ", solucao[i][0], solucao[i][1]);
    }
    printf("%c-%c", solucao[movimentos-1][0], solucao[movimentos-1][1]);
}


/*
 *
 *
 */
void resolve_hanoi(int n, int * origem, int * auxiliar, int * destino, char ** solucao)
{
    int i, mov;
    //mov = sizeof(int *)*n;
    for (i=0; i<mov; i++) {



    }
}



/* Função que inicializa as três hastes */
void hastes(int n, int * origem, int * auxiliar, int * destino)
{
    int i, q;
    q = n*sizeof(int);
    origem = malloc(q);
    auxiliar = malloc(q);
    destino = malloc(q);
    for (i=0; i<n; i++) {
        origem[i] = i+1;
        auxiliar[i] = 0;
        destino[i] = 0;
    }
}

/* Função que resolve a torre de hanoi para n discos */
void hanoi(int n, int * origem, int * auxiliar, int * destino, char ** solucao)
{
    int i;
    char model[2];
    hastes(n, origem, auxiliar, destino);
    solucao = malloc(sizeof(model)*(pow(2, n) - 1));
    for (i=0; i<(pow(2, n) - 1); i++) solucao[i] = malloc(2*sizeof(char));
    //resolve_hanoi(n, origem, auxiliar, destino, solucao);
    //p_solucao_d(n, solucao);
}

int main()
{
    int * origem;
    int * auxiliar;
    int * destino;
    char ** solucao;

    int n_discos;
    scanf("%d", &n_discos);
    //hanoi(n_discos, origem, auxiliar, destino, solucao);






    hastes(n_discos, origem, auxiliar, destino);
    p_hastes_d(n_discos, origem, auxiliar, destino);







    int i;
    free(origem);
    free(auxiliar);
    free(destino);
    for (i=0; i<(pow(2, n_discos) - 1); i++) free(solucao[i]);
    free(solucao);

	return 0;
}
