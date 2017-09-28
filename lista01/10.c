#include <stdio.h>

int main()
{
	double temperatura, res;
	int opcao;
	printf("\nDigite os numeros:\n");
	scanf("%lf %d", &temperatura, &opcao);
	if (opcao == 1) {
        res = temperatura + 273.15;
        printf("%lf", res);
	}
	else {
        if (opcao == 2) {
            res = temperatura - 273.15;
            printf("%lf", res);
        }
        else {
            printf("Erro. Insira uma opcao valida.");
        }
	}

	return 0;
}
