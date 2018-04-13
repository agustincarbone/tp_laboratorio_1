#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;
    float primerOperando=0;
    float segundoOperando=0;

    while(seguir=='s')
    {
        printf("\n");
        imprimirMensaje1(primerOperando,"\n1: Ingresar 1er operando (A=x)\n");
        imprimirMensaje2(segundoOperando,"2: Ingresar 2do operando (B=y)\n");
        printf("3: Calcular la suma (A+B)\n");
        printf("4: Calcular la resta (A-B)\n");
        printf("5: Calcular la division (A/B)\n");
        printf("6: Calcular la multiplicacion (A*B)\n");
        printf("7: Calcular el factorial (A!)\n");
        printf("8: Calcular todas las operaciones\n");
        printf("9: Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("1ro ");
                scanf("%f",&primerOperando);
                break;
            case 2:
                printf("2do ");
                scanf("%f",&segundoOperando);
                break;
            case 3:
                operacionSuma(primerOperando,segundoOperando);
                break;
            case 4:
                operacionResta(primerOperando,segundoOperando);
                break;
            case 5:
                operacionDivision(primerOperando,segundoOperando);
                break;
            case 6:
                operacionMultiplicacion(primerOperando,segundoOperando);
                break;
            case 7:
                operacionFactorial(primerOperando);
                break;
            case 8:
                todasLasFunciones(primerOperando,segundoOperando);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("ERROR, opcion erronea\n");
        }
    }
    return 0;
}
