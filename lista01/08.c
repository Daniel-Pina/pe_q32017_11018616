#include <stdio.h>

int main()
{
	int i, fibo=0, cont, f1=0, f2=1;
	printf("\nDigite i: ");
	scanf("%d", &i);
	printf("\n");
	if (i == 1) {
        printf(f1);
	}
	else {
        if (i == 2) {
            printf("%d, %d", f1, f2);
        }
        else {
            printf("%d, %d", f1, f2);
        }
        for (cont=3; cont<=i; cont++) {
            fibo = f1+f2;
            f1 = f2;
            f2 = fibo;
            printf(", %d", fibo);
        }
	}

	return 0;
}
