#include <stdio.h>

main() {
	int n;
	printf("\nDigite o número:\n");
	scanf("%d", &n);
	if ((n%2) == 0) {
	    printf("par\n\n");
	}
	else {
    	printf("impar\n\n");
	}
}
