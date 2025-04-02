//Cruz Apodaca Amiel Merari//
//En este programa le hicimos algunas adecuaciones al programa pasado de nuestra calculadora, le sumamos la funcion de raiz cuadrada y de exponencial ademas incluimos todo en un while//
//Inicio//
#include <stdio.h>
#include <math.h>
//Inicio//
int main()
{
    //Inicializamos variables//
    int res = 0;
    int a = 0;
    int b = 0;
    int op;

    //Imprimir Menu//
    do
    { 
        printf ("Menu: \n");
        printf ("escoje una opción; \n");
        printf ("1- Suma \n");
        printf ("2- Resta \n");
        printf ("3- Multiplicación \n");
        printf ("4- División\n");
        printf ("5- Raiz cuadrada\n");
        printf ("6- Potencia\n");
        printf ("0- Salida\n");
        //Leer op//  
        scanf ("%i" , &op);
    }
  // Si op < 0 y op > 6//
    while (op < 0 || op > 6);
do
{
    
   
    //ingresar a la opción escogida//
    switch (op)
    {
        case 1: 
            
            printf ("ingresa el primer valor;\n");
            scanf ("%i" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%i" ,& b);
            res=a+b;
            break;
        
        
        case 2:
            printf ("ingresa el primer valor;\n");
            scanf ("%i" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%i" ,& b);
            res=a-b;
            break;
        
    
        case 3:
        
            printf ("ingresa el primer valor;\n");
            scanf ("%i" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%i" ,& b);
            res=a*b;
            break;
        
    
        case 4:
        
            printf ("ingresa el primer valor;\n");
            scanf ("%i" ,& a);
            printf ("ingrese el segundo valor;\n");
            scanf ("%i" ,& b);
            res=a/b;
            break;
        
        
        case 5:
        
            printf ("Ingrese valor;\n");
            scanf ("%i" ,& a);
              if (a>0) {
              res= sqrt(a);}
              break;
        
        
        case 6:
         
            printf ("ingresa la base del numero;\n");
            scanf ("%i" ,& a);
            printf ("ingresa la potencia de la base;\n");
            scanf ("%i" ,& b);
            res= pow(a,b);
            break;
        
    }
    
//Imprimir res//
printf ("el reultado de la operación es;%i\n", res);
printf ("\n\n");

//Imprimir Menú//

     printf ("Menu: \n");
        printf ("escoje una opción; \n");
        printf ("1- Suma \n");
        printf ("2- Resta \n");
        printf ("3- Multiplicación \n");
        printf ("4- División\n");
        printf ("5- Raiz cuadrada\n");
        printf ("6- Potencia\n");
        printf ("0- Salida\n");
    //Leer op//
    scanf ("%i" , &op);
}
    //Si op es diferente de 0//
    while (op != 0);

return 0;
}
//Fin//
