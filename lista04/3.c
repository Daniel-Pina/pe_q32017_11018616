#include <stdio.h>
#include <stdlib.h>

typedef struct Ficha {
	char nome [100];
	int ra;
	float p1;
	float p2;
	float p3;
	float media;
} Ficha;

int main()
{
    Ficha alunos [50];
    FILE * fp;
    fp = fopen("lista_alunos.txt", "r");

    int i;
    for (i=0; i<50; i++) {
        fscanf(fp, "\%s \%d \%f \%f %f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
    }
    for (i=0; i<50; i++) {
        alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;
    }

    FILE * fq;
    fq = fopen("media_alunos.txt", "w");
    for (i=0; i<50; i++) {
        fprintf(fq, "\%s \%d \%.2f \%.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
    }

    return 0;
}
