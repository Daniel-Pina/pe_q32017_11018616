#include <stdio.h>

int main()
{
	int n;
	printf("\nDigite o número:\n");
	scanf("%d", &n);
	if ((n%2) == 0) {
	    printf("par\n");
	}
	else {
    	printf("impar\n");
	}

	return 0;
}
