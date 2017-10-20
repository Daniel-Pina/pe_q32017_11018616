#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Função que retorna o tamanho de uma string */
int s_size(char * s)
{
	int size=0;
	while (s[size] != '\0') size++;
	return size;
}

/* Função que contatena 2 strings */
char * contatena(char * s1, char * s2)
{
	char * s3;
	int size_s1, size_s2, size_s3, i;
	size_s1 = s_size(s1);
	size_s2 = s_size(s2);
	size_s3 = size_s1 + size_s2;
	s3 = malloc(size_s3*sizeof(char));
	for (i=0; i<size_s1; i++) {
		s3[i] = s1[i];
	}
	for (i=0; i<size_s2; i++) {
		s3[i+size_s1] = s2[i];
	}
	return s3;
}


int main()
{
	char s1[255];
	char s2[255];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%s\n", contatena(s1, s2));
	
	return 0;
}
