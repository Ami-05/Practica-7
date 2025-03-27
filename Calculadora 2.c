
//Inicio//
#include <stdio.h>
#include <math.h>

int main()
{
    //Inicializamos variables//
    int res = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int op;
 
 //Imprimimos Menu//
    printf ("escoje una opción; \n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    printf ("5- raiz\n");
    printf ("6- división\n");
    printf ("0- potencia\n");
  //Leer op//  
    scanf ("%u" , &op);
  // Si op es diferente de 0//
    while (op !=0)
{
    
   
    //ingresar a la opción escogida//
    switch (op==1);
    {
        scanf ("%d" ,& a);
        scanf ("%d" ,& b);
        printf ("ingresa el primer valor;\n");
        printf ("ingrese el segundo valor;\n");
        res=a+b;
    }
    
    {
        switch (op==2);
        {
            scanf ("%d" ,& a);
            scanf ("%d" ,& b);
            printf ("ingresa el primer valor;\n");
            printf ("ingrese el segundo valor;\n");
            res=a-b;
        }
    
        switch (op==3);
        {
            scanf ("%d" ,& a);
            scanf ("%d" ,& b);
            printf ("ingresa el primer valor;\n");
            printf ("ingrese el segundo valor;\n");
            res=a*b;
        }
    
        switch (op==4);
        {
            scanf ("%d" ,& a);
            scanf ("%d" ,& b);
            printf ("ingresa el primer valor;\n");
            printf ("ingrese el segundo valor;\n");
            res=a/b;
        }
        
        switch (op==5);
        {
            printf ("Si eligio la opcion 5 ingrese un unico valor;\n");
            scanf ("%d" ,& c);
            res= sqrt(c);
        }
        
        switch (op==6);
        { 
            scanf ("%d" ,& a);
            scanf ("%d" ,& b);
            scanf ("%d" ,& a);
            scanf ("%d" ,& b);
            res= pow(a,b);
        }
    }
    
//Imprimir res//
printf ("la operación es;%d\n", res);
//Imprimir Menú//
    printf ("escoje una opción; \n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    printf ("5- raiz\n");
    printf ("6- división\n");
    printf ("0- potencia\n");
    //Leer op//
    scanf ("%u" , &op);
}

return 0;
}
