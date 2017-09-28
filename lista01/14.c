#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, soma=0;
	double media;
	printf("\nDigite os numeros:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
	soma = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
	media = ((double)soma)/10;
	printf("soma: %d\nmedia: %lf", soma, media);

	return 0;
}

