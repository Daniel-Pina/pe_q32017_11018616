#include <stdio.h>
#include <math.h>


/*
 * Função que retorna uma aproximação do valor de pi,
 * de acordo com o algoritmo Gauss-Legendre
 */
double pi_GL(int n)
{	
	int i;
	double a, b, t, p, a1;

	a = 1;
	b = 1/sqrt(2);
	t = 0.25;
	p = 1;

	for (i=0; i<n; i++) {
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*(pow((a - a1), 2));
		p = 2*p;
		a = a1;
	}

	return (a+b)/(4*t);
}


int main()
{
	int n;
	scanf("%d", &n);
	printf("%lf\n", pi_GL(n));

	return 0;
}
