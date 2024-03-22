#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30], palavraNova[30];

    printf("Digite uma palavras: ");
    scanf(" %s", palavra);

    int tam = strlen(palavra);
    int i, j;

    for (i = tam - 1, j = 0; i >= 0; i--, j++)
    {
        palavraNova[j] = palavra[i];
    }
    
    printf("Palavra invertida: %s\n", palavraNova);

    return 0;
}