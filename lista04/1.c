#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto {
	float x;
	float y;
	float z;
} Ponto;

float dist_pontos(Ponto A, Ponto B)
{
    return (sqrt((pow(A.x-B.x, 2))+(pow(A.y-B.y, 2))+(pow(A.z-B.z, 2))));
}

int main()
{
    Ponto A;
    Ponto B;
    scanf("%f, %f, %f", &(A.x), &(A.y), &(A.z));
    scanf("%f, %f, %f", &(B.x), &(B.y), &(B.z));
    printf("%.2f\n", dist_pontos(A, B));

    return 0;
}
