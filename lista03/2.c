#include <stdio.h>
#include <stdlib.h>

/* Retorna o tamanho de uma string */
int s_size(char * entrada)
{
    int L;
    for (L=0; *(entrada+L)!='\0'; L++) {
    }
    return L;
}

/* Inverte uma string */
char * inverte_s(char * entrada)
{
    int i, size;
    size = s_size(entrada);
    char * adartne;
    adartne = malloc(size*sizeof(char));
    for (i=0; i<size; i++) {
        *(adartne+i) = *(entrada+size-i-1);
    }
    return adartne;
}

int main()
{
    char entrada [255];
    fgets (entrada, 255, stdin);

    char * adartne;
    adartne = inverte_s(entrada);
    printf("%s\n", adartne);

    return 0;
}
