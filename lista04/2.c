#include <stdio.h>
#include <stdlib.h>

typedef struct Tempo {
	int min;
	int s;
	int d;
} Tempo;

void sub(Tempo A, Tempo B)
{
    Tempo R;
    int dA, dB, dR, signal=0;
    dA = A.d + A.s*100 + A.min*6000;
    dB = B.d + B.s*100 + B.min*6000;
    dR = dB - dA;
    if (dR < 0) {
        signal = 1;
        dR = dR * (-1);
    }
    R.min = dR/6000;
    dR = dR%6000;
    R.s = dR/100;
    dR = dR%100;
    R.d = dR;
    if (signal == 1) {
        printf("-%dm %ds %d\n", R.min, R.s, R.d);
    }
    else {
        printf("%dm %ds %d\n", R.min, R.s, R.d);
    }
}

int main()
{
    Tempo A;
    Tempo B;
    scanf("%dm %ds %d", &(A.min), &(A.s), &(A.d));
    scanf("%dm %ds %d", &(B.min), &(B.s), &(B.d));
    sub(A, B);

    return 0;
}
