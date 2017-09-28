#include <stdio.h>

int main()
{
	int n, res=0, i;
	printf("\nDigite o numero:\n");
	scanf("%d", &n);
	for (i=0; i<=n; i++) {
        res += i;
	}
	printf("%d", res);

	return 0;
}
