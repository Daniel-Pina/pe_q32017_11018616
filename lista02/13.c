#include <stdio.h>

/* Calcula o mdc de m e n recursivamente */
int mdc(int m, int n)
{
	if (m == 0) return n;
	if (n == 0) return m;
	return (mdc(n, m%n));
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", mdc(m, n));

	return 0;
}
