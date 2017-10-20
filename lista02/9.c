#include <stdio.h>


/* Calcula x^y por recursão */
int reg_pow(int x, int y)
{
    if (y == 1) return x;
    return (x*reg_pow(x, y-1));
}


int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
	printf("%d\n", (reg_pow(x, y)));

	return 0;
}
