#include <stdio.h>
#include <stdlib.h>

/*
 * Reconhece se um caracter � vogal
 * (min�scula ou mai�scula)
*/
int vowel (char c)
{
    if ((c == 'A')||(c == 'E')||(c == 'I')||(c == 'O')||(c == 'U')||(c == 'a')||(c == 'e')||(c == 'i')||(c == 'o')||(c == 'u')) {
        return 1;
    }
    return 0;
}

/* Fun��o que encontra o n�mero de vogais em uma string */
int n_vowels(char * entrada)
{
    int i, n=0;
    for (i=0; i<255; i++) {
        if (*(entrada+i) == '\0') break;
        if (vowel(*(entrada+i))) {
            n++;
        }
    }
    return n;
}

int main()
{
    char entrada [255];
    fgets (entrada, 255, stdin);

    printf("%d\n", n_vowels(entrada));

    return 0;
}
