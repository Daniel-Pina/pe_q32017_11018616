#include <stdio.h>

int main()
{
	int n, i;
	printf("\nDigite o numero:\n");
	scanf("%d", &n);
	if (n > 1) {
        printf("\n100");
	}
	for (i=100; i<=n; i=i+2) {
        printf(" %d", i);
	}

	return 0;
}
