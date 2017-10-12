#include <stdio.h>


/* Função para encontrar o volume de um paralelepípedo */
float V(float l, float c, float h)
{
	return (l*c*h);
}


int main()
{
	float l, c, h;
	scanf("%f %f %f", &l, &c, &h);
	printf("%.2f\n", V(l, c, h));

	return 0;
}
