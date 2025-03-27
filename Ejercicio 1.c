//Cruz Apodaca Amiel Merari//
//El siguiente programa al introducir dos numeros indica cual es mayor//
int main()
{
    
    int a;
    int b; 
    
    printf("Introduzca los dos valores de los cuales quiere saber cual es mayor");
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    {
        if (a>b)
        {
            printf("El primer numero es mayor al segundo numero introducido"); 
        }
        
        else
        
        {
            printf("El segundo numero es mayor al primer numero");
        }
    }

    return 0;
}
//Con la funcion void main
#include <stdio.h>

void main()
{
    
    int a;
    int b; 
    
    printf("Introduzca los dos valores de los cuales quiere saber cual es mayor");
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    {
        if (a>b)
        {
            printf("El primer numero es mayor al segundo numero introducido"); 
        }
        
        else
        
        {
            printf("El segundo numero es mayor al primer numero");
        }
    }

    return ;
}
