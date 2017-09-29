#include <stdio.h>
#include <math.h>


/* Retorna o valor que multiplica o somatório da fórmula */
double multiplicador()
{
	return ((2*(sqrt(2)))/9801);
}


/* Calcula o fatorial de k */
int fat(int k)
{
	int i, fat=1;
	for (i=k; i>1; i--) {
		fat *= i;
	}
	return fat;
}


/* Calcula o numerador do somatório */
double numerador(int k)
{
	return (fat(4*k)*(1103+26390*k));
}


/* Calcula o denominador do somatório */
double denominador(int k)
{
	return (pow(fat(k), 4)*pow(396, 4*k));
}


/* Retorna o resultado do somatório da fórmula */
double sum(int n)
{
	int k;
	double res=0;
	for (k=0; k<=n; k++) {
		res += numerador(k)/denominador(k);
	}
	return res;
}


/* Encontra o valor de pi pela Série de Ramanujan */
double find_pi(int n)
{
	double pi;
	pi = 1/((multiplicador())*(sum(n)));
	return pi;
}


int main()
{
	int n;
	double pi;
	printf("\nDigite o parâmetro: ");
	scanf("%d", &n);
	pi = find_pi(n);
	printf("\nO valor de pi é:\n%lf\n\n", pi);

	return 0;
}
