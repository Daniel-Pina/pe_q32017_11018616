#include <stdio.h>


/* Função recursiva para verificar se um número é par ou ímpar */
double V(double l, double c, double h)
{	
	return (l*c*h);
}


int main()
{
	double l, c, h;
	scanf("%lf %lf %lf", &l, &c, &h);
	printf("%lf\n", V(l, c, h));

	return 0;
}
