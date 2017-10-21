#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/************************************ PROGRAMA NAO FUNCIONOU QUANDO MODULARIZADO ************************************/

/* Função que imprime as hastes (debug) */
void p_hastes_d(int n, int * origem, int * auxiliar, int * destino)
{
    int i;
    for (i=0; i<n; i++) {
        printf("%d ", origem[i]);
    }
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
    int i, Q;
    char model[2];
    q = n*sizeof(int);
    origem = malloc(q);
    auxiliar = malloc(q);
    destino = malloc(q);
    for (i=0; i<n; i++) {
        origem[i] = i+1;
        auxiliar[i] = 0;
        destino[i] = 0;
    }
    solucao = malloc(sizeof(model)*(pow(2, n) - 1));
    for (i=0; i<(pow(2, n) - 1); i++) solucao[i] = malloc(2*sizeof(char));


    char ultima_haste, penultima_haste;

    for (i=0; i<(pow(2, n) - 1); i++) {
		/* PASSO 1 */
		if (i == 0) {
			origem[0] = 0;
			if (n%2 == 0) {
				auxiliar[0] = 1;
				ultima_haste = 'A';
			}
			else {
				destino[0] = 1;
				ultima_haste = 'D';
			}
			penultima_haste = 'O';
		}
		else {
			switch (ultima_haste) {
				case 'A':
					if (penultima_haste == 'O') {
						auxiliar[0] = 0;
						destino[0] = 1;
						penultima_haste = ultima_haste;
						ultima_haste = 'D';
					}
					else {
						auxiliar[0] = 0;
						origem[0] = 1;
						penultima_haste = ultima_haste;
						ultima_haste = 'O';
					}
					break;
				case 'D':
					if (penultima_haste == 'O') {
						destino[0] = 0;
						auxiliar[0] = 1;
						penultima_haste = ultima_haste;
						ultima_haste = 'A';
					}
					else {
						destino[0] = 0;
						origem[0] = 1;
						penultima_haste = ultima_haste;
						ultima_haste = 'O';
					}
					break;
				case 'O':
					if (penultima_haste == 'A') {
						origem[0] = 0;
						destino[0] = 1;
						penultima_haste = ultima_haste;
						ultima_haste = 'D';
					}
					else {
						origem[0] = 0;
						auxiliar[0] = 1;
						penultima_haste = ultima_haste;
						ultima_haste = 'A';
					}
					break;
				default:
					break;
			}
		}
		/* PASSO 2 */
		int u_o, u_d, u_a;
		for (i=0; i<n; i++) {
			if (origem[i] != 0) u_o = origem[i];
		}
		for (i=0; i<n; i++) {
			if (destino[i] != 0) u_d = destino[i];
		}
		for (i=0; i<n; i++) {
			if (auxiliar[i] != 0) u_a = auxiliar[i];
		}
		if (u_o == 1) {
			if (u_a < u_d) {
				
			}
			else {
				
			}
		}
		else {
			if (u_a == 1) {
				if (u_o < u_d) {
				
				}
				else {
				
				}
			}
			else {
				if (u_o < u_a) {
				
				}
				else {
				
				}
			}
		}
		
/*
"
O algoritmo abaixo, se seguido, garantirá a solução ótima, ou seja, o menor número de movimentos.

Mova o menor disco para a haste não recentemente visitada. Se for o primeiro movimento do jogo, mova o disco menor para a haste destino se o número de discos for ímpar, caso contrário, mova o disco menor para a haste auxiliar.
Mova o disco disponível (nesse ponto só há um movimento “legal” a ser feito)
Repita os passos 1 e 2 até resolver o problema.
"
*/
		
		
		
		

	}
    
	
	int movimentos;
    movimentos = pow(2, n) - 1;
    for (i=0; i<movimentos-1; i++) {
        printf("%c-%c, ", solucao[i][0], solucao[i][1]);
    }
    printf("%c-%c", solucao[movimentos-1][0], solucao[movimentos-1][1]);
}

int main()
{
    int * origem;
    int * auxiliar;
    int * destino;
    char ** solucao;

    int n_discos;
    scanf("%d", &n_discos);
    hanoi(n_discos, origem, auxiliar, destino, solucao);

    int i;
    free(origem);
    free(auxiliar);
    free(destino);
    for (i=0; i<(pow(2, n_discos) - 1); i++) free(solucao[i]);
    free(solucao);

	return 0;
}
