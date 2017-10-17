#include <stdio.h>

double salarios_base[5] = {10000, 8000, 5000, 3000, 2000};

double desc(int id_cargo, int faltas)
{
    return (double) ((salarios_base[id_cargo-1]*faltas)/20);
}

double acresc(int id_cargo, int h_extras)
{
    return (double) ((((salarios_base[id_cargo-1])/(20*8))+40)*h_extras);
}


double salario(int id_cargo, int faltas, int h_extras)
{
    return (salarios_base[id_cargo-1] - desc(id_cargo, faltas) + acresc(id_cargo, h_extras));
}


int main()
{
    int id_cargo, faltas, h_extras;
    scanf("%d %d %d", &id_cargo, &faltas, &h_extras);
    printf("%.2lf\n", salario(id_cargo, faltas, h_extras));

	return 0;
}
