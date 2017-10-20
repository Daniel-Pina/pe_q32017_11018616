#include <stdio.h>

/* Fun��o que inverte os algarismos de um n�mero */
int inverte(int num) {
    return inverte_TR(num, 0);
}

/* Invers�o caudal */
int inverte_TR(int num, int mun) {
    if (num == 0) return mun;
    return inverte_TR(num/10, mun*10+(num%10));
}

/* Verifica se um n�mero � pal�ndromo */
void pal(int num)
{
    int mun;
    mun = inverte(num);
    if (mun == num) printf("sim\n");
	else printf("nao\n");
}

int main()
{
	int num;
	scanf("%d", &num);
    pal(num);

	return 0;
}

