#include <stdio.h>
#include <math.h>


/* Função que soma dois números */
float sum(float a, float b)
{
	return (a+b);
}

/* Função que subtrai dois números */
float sub(float a, float b)
{
	return (a-b);
}

/* Função que multiplica dois números */
float mult(float a, float b)
{
	return (a*b);
}

/* Função que divide dois números */
float div(float a, float b)
{
	return (a/b);
}

/* Função que eleva um número ao outro */
float power(float a, float b)
{
	return (pow(a, b));
}


/* Função que seleciona a operação desejada */
float calc(int op, float a, float b)
{
    switch (op) {
        case 1:
            return sum(a, b);
        case 2:
            return sub(a, b);
        case 3:
            return mult(a, b);
        case 4:
            return div(a, b);
        case 5:
            return power(a, b);
        default:
            printf("Operacao invalida");
            return -1;
    }

}


int main()
{
	int op;
	float a, b;
	scanf("%d %f %f", &op, &a, &b);
	printf("%.2f\n", calc(op, a, b));

	return 0;
}
