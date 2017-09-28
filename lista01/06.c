#include <stdio.h>

int main()
{
	int x, fat, i;
	printf("\nDigite o numero:\nx = ");
	scanf("%d", &x);
	fat = 1;
    for (i=x; i>1; --i) {
        fat *= i;
    }
	printf("x! = %d\n", fat);

	return 0;
}
