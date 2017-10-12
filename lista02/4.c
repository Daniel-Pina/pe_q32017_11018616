#include <stdio.h>
#include <math.h>


/* Fun��o que soma dois n�meros */
float sum(float a, float b)
{
	return (a+b);
}

/* Fun��o que subtrai dois n�meros */
float sub(float a, float b)
{
	return (a-b);
}

/* Fun��o que multiplica dois n�meros */
float mult(float a, float b)
{
	return (a*b);
}

/* Fun��o que divide dois n�meros */
float div(float a, float b)
{
	return (a/b);
}

/* Fun��o que eleva um n�mero ao outro */
float power(float a, float b)
{
	return (pow(a, b));
}


/* Fun��o que seleciona a opera��o desejada */
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
