#include <stdio.h>
#include <stdlib.h>

/* Lê o array no formato determinado */
int * read_vetor(int * v, int n)
{
    v = malloc(n*sizeof(int));
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    return v;
}

/* Reseta o vetor (iguala todos os seus elementos a 0) */
int * reset_vetor(int * v, int n)
{
    int i;
    for (i=0; i<n; i++) {
        v[i] = 0;
    }
    return v;
}

/* Preenche o vetor que contém em v[i] o número de repetições de i na sequência digitada */
int * conta_repeticoes(int * v, int n, int * repeticoes, int tamanho_rep)
{
    int i, j;
    for (i=0; i<tamanho_rep; i++) {
        for (j=0; j<n; j++) {
            if (v[j] == i) {
                repeticoes[i]++;
            }
        }
    }
    return repeticoes;
}

/* Encontra o maior elemento do array */
int maior_elem(int * v, int n)
{
    int i, maior;
    maior = v[0];
    for (i=1; i<n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

/* Imprime as repetições no modelo desejado */
void print_rep(int * v, int n)
{
    int tamanho_rep = maior_elem(v, n) + 1;
    int * repeticoes = malloc(sizeof(int)*tamanho_rep);
    repeticoes = reset_vetor(repeticoes, tamanho_rep);
    repeticoes = conta_repeticoes(v, n, repeticoes, tamanho_rep);
    int i;
    for (i=0; i<tamanho_rep-1; i++) {
        if (repeticoes[i] > 1) {
            printf("%d-%d ", i, repeticoes[i]);
        }
    }
    if (repeticoes[tamanho_rep-1] > 1) {
        printf("%d-%d", tamanho_rep-1, repeticoes[tamanho_rep-1]);
    }
}

int main()
{
    int n;
    int * v;
    scanf("%d", &n);
    v = read_vetor(v, n);

    print_rep(v, n);

    free(v);
    return 0;
}
