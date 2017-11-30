/*****************************************************\
|* Times.c                                           *|
|*                                                   *|
|* Algoritmo de estudo do conteúdo da segunda prova  *|
|* da disciplina de Programação Estruturada          *|
\*****************************************************/

#include <stdio.h>
#include <stdlib.h>

/// Número de Times
#define N 20

/// Struct que representa um clube de futebol
typedef struct Clube {
    int classificacao;
	char nome[100];
	int pontos;
	int jogos;
	int v;  // Vitórias
	int e;  // Empates
	int d;  // Derrotas
	int gp; // Gols Pró
	int gc; // Gols Contra
	int sg; // Saldo de Gols
} Clube;

/* Troca os elementos de índices m e n do vetor */
void swap(Clube * v, int m, int n)
{
	Clube aux;
	aux = v[m];
	v[m] = v[n];
	v[n] = aux;
}

/* Função de partição */
int partition (Clube * v, int low, int high)
{
    Clube pivot = v[high];
    int j, i = low;
    for (j=low; j<high; j++) {
        if (v[j].gp <= pivot.gp) {
            swap(v, i, j);
            i++;
        }
    }
    swap(v, i, high);
    return i;
}

/* Ordenação por QuickSort */
void quicksort(Clube * v, int low, int high)
{
    int p;
    if (low < high) {
        p = partition(v, low, high);
        quicksort(v, low, p-1);
        quicksort(v, p+1, high);
    }
}

int main()
{
	int i, j;
    Clube BR[20];   //Cria um array contendo 20 clubes do campeonato brasileiro 2017

    ///Ler os dados de todos os times a partir do arquivo de texto
    FILE * teams;
    teams = fopen("tabela.txt", "r");
	for (i=0; i<N; i++) {
        fscanf(teams, "%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d", &BR[i].classificacao, BR[i].nome, &BR[i].pontos, &BR[i].jogos, &BR[i].v, &BR[i].e, &BR[i].d, &BR[i].gp, &BR[i].gc, &BR[i].sg);
    }


    /* Note que o vetor está ordenado por classificação */


    ///Por busca binária, encontrar o n-ésimo colocado do campeonato (classificacao = n) e imprime seus dados no arquivo
    ///Esse tipo de busca supõe que o vetor já está pré-ordenado no quesito desejado
    int n = 5;
    int m, h=0, t=N-1;
    while (1) {
        m = (h+t)/2;
        if (BR[m].classificacao == n) {
            i = m;
            break;
        }
        else {
            if (BR[m].classificacao > n) t = m-1;
            else h = m+1;
        }
        //Verificação de erro
        if (h > t) {
            printf("\nERRO\n");
            break;
        }
        printf("\nEEUUU\n");
    }
    FILE * n_pos;
    n_pos = fopen("colocacao_n.txt", "w");
    fprintf(n_pos, "\%d\t\%s\t\%d\t\%d\t\%d\t\%d\t\%d\t\%d\t\%d\t\%d\n", BR[i].classificacao, BR[i].nome, BR[i].pontos, BR[i].jogos, BR[i].v, BR[i].e, BR[i].d, BR[i].gp, BR[i].gc, BR[i].sg);


    ///Ordenar o vetor de acordo com os piores ataques (menor gp), utilizando QuickSort
    quicksort(BR, 0, N-1);
    FILE * less_gp;
    less_gp = fopen("piores_ataques.txt", "w");
    for (i=0; i<N; i++) {
        fprintf(less_gp, "\%d\t\%s\t\%d\n", BR[i].classificacao, BR[i].nome, BR[i].gp);
    }

    ///Ordenar o vetor de acordo com as melhores defesas (menor gc), utilizando InsertSort
    Clube aux;;
	for (i=0; i<N; i++) {
		for (j=i; j>0; j--) {
			while (BR[j-1].gc > BR[j].gc) {
				aux = BR[j-1];
				BR[j-1] = BR[j];
				BR[j] = aux;
			}
		}
	}
    FILE * less_gc;
    less_gc = fopen("melhores_defesas.txt", "w");
    for (i=0; i<N; i++) {
        fprintf(less_gc, "\%d\t\%s\t\%d\n", BR[i].classificacao, BR[i].nome, BR[i].gc);
    }










    /*
    FILE * most_gp;
    most_gp = fopen("melhores_ataques.txt", "w");
    for (i=0; i<N; i++) {
        fprintf(most_gp, "\%d\t\%s\t\%d\t\%d\t\%d\t\%d\t\%d\t\%d\t\%d\t\%d\n", BR[i].classificacao, BR[i].nome, BR[i].pontos, BR[i].jogos, BR[i].v, BR[i].e, BR[i].d, BR[i].gp, BR[i].gc, BR[i].sg);
    }
    */

    return 0;
}
