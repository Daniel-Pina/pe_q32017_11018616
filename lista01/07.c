#include <stdio.h>

int main()
{
	int x, y, pow, i;
	printf("\nDigite os numeros:\n");
	scanf("%d %d", &x, &y);
	pow = 1;
	for (i=1; i<=y; i++) {
        pow *= x;
	}
	printf("%d", pow);

	return 0;
}
