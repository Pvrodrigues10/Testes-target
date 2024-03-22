#include "stdio.h"

int main()
{
    int a = 0, b = 1, auxiliar;
    int num_informado;

    printf("Insira um numero: ");
    scanf("%d", &num_informado);

    for(int i = 0; i < num_informado; i++)
    {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        if (auxiliar >= num_informado)
        {  
            break;
        }

    }
    
    
    if (num_informado == auxiliar || num_informado == 0)
    {
        printf("Numero inserido pertence a sequencia de Fibonnaci\n");
    }
    else
    {
        printf("Numero inserido nao pertence a sequencia de Fibonnaci\n");
    }

    return 0;
}