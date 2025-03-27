//Cruz Apodaca Amiel Merari
//El siguiente programa valida si un numero es par o impar
#include <stdio.h>

int main()
{
    int n;
    
    printf("Introduzca su valor");
    scanf("%u" ,&n);
    
    {
        if (n>=1)
        {
            printf("El valor es par"); 
        }
        
        else
        
        {
            printf("El valor es impar");
        }
    }

    return 0;
}
