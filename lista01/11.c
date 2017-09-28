#include <stdio.h>
#include <math.h>

int main()
{
	int valor, opcao, res=0, ser=0, mult=0;
	printf("\nDigite os numeros:\n");
	scanf("%d %d", &valor, &opcao);
	if (opcao == 1) {
        while (valor >= 0) {
            if (valor == 0) {
                ser *= 10;
                break;
            }
            ser = ser*10 + valor%2;
            valor /= 2;
        }
        while (ser >= 0) {
            if (ser == 0) {
                res *= 10;
                break;
            }
            res = res*10 + (ser%10);
            ser /= 10;

        }
        printf("%d", res);
	}
	else {
        if (opcao == 2) {
            while (valor > 0) {
                res += (valor%10)*pow(2, mult);
                valor /= 10;
                mult++;
            }
            printf("%d", res);
        }
        else {
            printf("Erro. Insira uma opcao valida.");
        }
	}

	return 0;
}
