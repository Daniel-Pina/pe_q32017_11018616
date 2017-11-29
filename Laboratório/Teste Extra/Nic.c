#include <stdio.h>
#include <stdlib.h>

typedef struct Relax {
	char nome [100];
	int id;
	float alt;
	int q_mat;
	char * prev;
	//char * creditos;
	//float CR;
} Relax;

int main()
{
    Relax lista [3];

    FILE * fp;
    fp = fopen("lista.txt", "r");

	int i, j;

	for (i=0; i<3; i++) {
		lista[i].q_mat = 6;
		lista[i].prev = malloc(sizeof(char)*lista[i].q_mat);
        fscanf(fp, "\%s \%d \%f \%c \%c \%c \%c \%c \%c", lista[i].nome, &lista[i].id, &lista[i].alt, &(lista[i]).prev[0], &(lista[i]).prev[1], &(lista[i]).prev[2], &(lista[i]).prev[3], &(lista[i]).prev[4], &(lista[i]).prev[5]);
    }



    FILE * fk;
    fk = fopen("resultado.txt", "w");
    for (i=0; i<3; i++) {
        fprintf(fk, "\%d ->\t\%s \%f \%c \%c \%c \%c \%c \%c\n", lista[i].id, lista[i].nome, lista[i].alt, (lista[i]).prev[0], (lista[i]).prev[1], (lista[i]).prev[2], (lista[i]).prev[3], (lista[i]).prev[4], (lista[i]).prev[5]);
    }

    return 0;
}
