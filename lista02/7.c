#include <stdio.h>
#include <math.h>



/* Convers�o "Decimal -> Decimal" */
float d_to_d(float value)
{
    return value;
}

/* Convers�o "Decimal -> Bin�rio" */
float d_to_b(float value)
{
    int res=0, ser=0;
    while (value >= 0) {
        if (value == 0) {
            ser *= 10;
            break;
        }
        ser = ser*10 + ((int) value)%2;
        value /= 2;
    }
    while (ser >= 0) {
        if (ser == 0) {
            res *= 10;
            break;
        }
        res = res*10 + (ser%10);
        ser /= 10;
    }
    return ser;
}

/* Convers�es de temperatura com entrada em Celsius */
float d_to_x(int output, float value)
{
    switch (output) {
        case 1:
            return d_to_d(value);
        case 2:
            return d_to_b(value);
        default:
            return -1;
    }
}








/* Convers�o "Bin�rio -> Decimal" */
float b_to_d(float value)
{
    int res=0, mult=0;
    while (value > 0) {
        res += (((int) value)%10)*pow(2, mult);
        value /= 10;
        mult++;
    }
    return res;
}

/* Convers�o "Bin�rio -> Bin�rio" */
float b_to_b(float value)
{
    return value;
}

/* Convers�es de temperatura com entrada em Celsius */
float b_to_x(int output, float value)
{
    switch (output) {
        case 1:
            return b_to_d(value);
        case 2:
            return b_to_b(value);
        default:
            return -1;
    }
}




/*
 * Identifica o tipo de valor
 * num�rico inserido
 * e aciona a respectiva fun��o
 */
float num(float input, float output, float value)
{
    switch ((int) input) {
        case 1:
            return d_to_x(output, value);
        case 2:
            return b_to_x(output, value);
        default:
            return -1;
    }
}




/* Convers�o "Celsius -> Celsius" */
float c_to_c(float value)
{
    return value;
}

/* Convers�o "Celsius -> Fahrenheit" */
float c_to_f(float value)
{
    return ((value*1.8) + 32);
}

/* Convers�o "Celsius -> Kelvin" */
float c_to_k(float value)
{
    return (value + 273.15);
}

/* Convers�es de temperatura com entrada em Celsius */
float c_to_x(int output, float value)
{
    switch (output) {
        case 1:
            return c_to_c(value);
        case 2:
            return c_to_f(value);
        case 3:
            return c_to_k(value);
        default:
            return -1;
    }
}



/* Convers�o "Kelvin -> Celsius" */
float k_to_c(float value)
{
    return (value - 273.15);
}

/* Convers�o "Kelvin -> Fahrenheit" */
float k_to_f(float value)
{
    return c_to_f(k_to_c(value));
}

/* Convers�o "Kelvin -> Kelvin" */
float k_to_k(float value)
{
    return (value + 273.15);
}

/* Convers�es de temperatura com entrada em Kelvin */
float k_to_x(float output, float value)
{
    switch ((int) output) {
        case 1:
            return k_to_c(value);
        case 2:
            return k_to_f(value);
        case 3:
            return k_to_k(value);
        default:
            return -1;
    }
}



/* Convers�o "Fahrenheit -> Celsius" */
float f_to_c(float value)
{
    return (value - 32)/1.8;
}

/* Convers�o "Fahrenheit -> Fahrenheit" */
float f_to_f(float value)
{
    return value;
}

/* Convers�o "Fahrenheit -> Kelvin" */
float f_to_k(float value)
{
    return c_to_k(f_to_c(value));
}

float f_to_x(float output, float value)
{
    switch ((int) output) {
        case 1:
            return f_to_c(value);
        case 2:
            return f_to_f(value);
        case 3:
            return f_to_k(value);
        default:
            return -1;
    }
}




/*
 * Identifica a unidade de medida do valor
 * de temperatura inserido
 * e aciona a respectiva fun��o
 */
float temp(float input, float output, float value)
{
    switch ((int) input) {
        case 1:
            return c_to_x(output, value);
        case 2:
            return f_to_x(output, value);
        case 3:
            return k_to_x(output, value);
        default:
            return -1;
    }
}





/*
 * Fun��o que reconhece o tipo de convers�o
 * e aciona a respectiva fun��o
 */
float convert(float type, float input, float output, float value)
{
    switch ((int) type) {
        case 1:
            return temp(input, output, value);
        case 2:
            return num(input, output, value);
        default:
            return -1;
    }
}


int main()
{
	float type, input, output, value;
	scanf("%f %f %f %f", &type, &input, &output, &value);
	printf("%.2f\n", convert(type, input, output, value));

	return 0;
}
