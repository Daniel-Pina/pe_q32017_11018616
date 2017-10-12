#include <stdio.h>
#include <math.h>


/*
 * Fun��o que imprime as ra�zes de uma
 * equa��o de segundo grau de coeficientes a, b e c,
 * calculadas pelo m�todo de Bhaskara
*/
bhaskara(double a, double b, double c)
{
    double delta, x1, x2;
    delta = pow(b, 2) - 4*a*c;
    if (delta >= 0) {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("%.2lf %.2lf\n", x1, x2);
    }
    else {
        double m = (-b/(2*a)), n = (sqrt(-delta)/(2*a));
        printf("%.2lf+%.2lf*i %.2lf-%.2lf*i\n", m, n, m, n);
    }
}


int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	bhaskara(a, b, c);

	return 0;
}
