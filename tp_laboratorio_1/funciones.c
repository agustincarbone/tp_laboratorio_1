#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/** \brief imprime un mensaje y modifica la X.
 *
 * \param primerOperando float // toma el numero a verificar.
 * \param mensaje char* // ingresa al lugar de memoria del mensaje a imprimir.
 * \return int // retorna 0 si no hay error y -1 si hay error.
 *
 */
int imprimirMensaje1 (float primerOperando,char* mensaje)
{
    if(!primerOperando)
    {
    printf("%s",mensaje);
    }
    else
        {
            printf("1: Ingresar 1er operando (A=%.2f)\n",primerOperando);
        }
    return 0;
}

/** \brief imprime un mensaje y modifica la Y.
 *
 * \param segundoOperando float // toma el numero a verificar.
 * \param mensaje char* // ingresa al lugar de memoria del mensaje a imprimir.
 * \return int // retorna 0 si no hay error y -1 si hay error.
 *
 */
int imprimirMensaje2 (float segundoOperando,char* mensaje)
{
    if(!segundoOperando)
    {
        printf("%s",mensaje);
    }
    else
        {
            printf("2: Ingresar 2do operando (B=%.2f)\n",segundoOperando);
        }
    return 0;
}

/** \brief suma  los numeros ingresados, comprueba si los valores son validos e imprime el resultado.
 *
 * \param primerOperando float // obtiene el primer numero a sumar.
 * \param segundoOperando float // obtiene el segundo numero a sumar.
 * \return int // retorna 0 si no hay error -1 si hay error.
 *
 */
float operacionSuma(float primerOperando, float segundoOperando)
{
    float resultado;
    int retorno=-1;
    resultado=primerOperando+segundoOperando;

    if(resultado>INT_MIN && resultado<INT_MAX)
    {
        printf("\nEl resultado de la suma es %.2f\n",resultado);
        retorno=0;
        printf("retorno %d\n",retorno);
    }else
        {
            printf("\nERROR, el resultado excede o es menor al limite\n");
            printf("retorno %d\n",retorno);
        }
    return retorno;
}

/** \brief resta los numeros ingresados, comprueba si los valores son validos e imprime el resultado.
 *
 * \param primerOperando float // obtiene el primer numero al que se le va a restar.
 * \param segundoOperando float // obtiene el segundo numero que va a restarse.
 * \return int // retorna 0 si no hay error -1 si hay error.
 *
 */
float operacionResta (float primerOperando, float segundoOperando)
{
    float resultado;
    int retorno=-1;
    resultado = primerOperando-segundoOperando;

    if(resultado>INT_MIN && resultado<INT_MAX)
    {
        printf("\nEl resultado de la resta es %.2f\n",resultado);
        retorno=0;
        printf("retorno %d\n",retorno);
    }else
        {
            printf("\nERROR, el resultado excede o es menor al limite\n");
            printf("retorno %d\n",retorno);
        }
    return retorno;
}

/** \brief divide los numeros ingresados, comprueba si los valores son validos e imprime el resultado.
 *
 * \param primerOperando float // obtiene el primer numero que es el dividendo.
 * \param segundoOperando float // obtiene el segundo numero que es el divisor.
 * \return int // retorna 0 si no hay error -1 si hay error.
 *
 */
float operacionDivision (float primerOperando, float segundoOperando)
{
    float resultado;
    int retorno=-1;

    while(!segundoOperando)
        {
            printf("\nIngrese segundo numero (exclusivo para la division) \n");
            scanf("%f",&segundoOperando);
        }

    resultado =(float)primerOperando/segundoOperando;
    if(resultado>INT_MIN && resultado<INT_MAX)
    {
        printf("\nEl resultado de la division es %.2f\n",resultado);
        retorno=0;
        printf("retorno %d\n",retorno);
    }else
        {
            printf("\nERROR, el resultado excede o es menor al limite\n");
            printf("retorno %d\n",retorno);
        }
    return retorno;
}

/** \brief multiplica los numeros ingresados, comprueba si los valores son validos e imprime el resultado.
 *
 * \param primerOperando float // obtiene el primer numero a multiplicar.
 * \param segundoOperando float // obtiene el segundo numero a multiplicar.
 * \return int // retorna 0 si no hay error -1 si hay error.
 *
 */
float operacionMultiplicacion (float primerOperando, float segundoOperando)
{
    float resultado;
    int retorno=-1;
    resultado = primerOperando*segundoOperando;

    if(resultado>INT_MIN && resultado<INT_MAX)
    {
        printf("\nEl resultado de la multiplicacion es %.2f\n",resultado);
        retorno=0;
        printf("retorno %d\n",retorno);
    }else
        {
            printf("\nERROR, el resultado excede o es menor al limite\n");
            printf("retorno %d\n",retorno);
        }
    return retorno;
}

/** \brief calcula el factorial del numero ingresado, comprueba si los valores son validos e imprime el resultado.
 *
 * \param primerOperando float // obtiene el numero a calcular.
 * \return int // retorna 0 si no hay error -1 si hay error.
 *
 */
float operacionFactorial (float primerOperando)
{
    float resultado=1;
    int retorno=-1;
    int contador;

    while(primerOperando<0 || primerOperando>12)
    {
        printf("\nERROR, ingrese un numero entre 0 y 12(exclusivo para el factorial)\n");
        scanf("%f",&primerOperando);
    }

    for(contador=1;contador<primerOperando;contador++)
    {
        resultado=resultado*(contador+1);
    }
    if(resultado>INT_MIN && resultado<INT_MAX)
    {
        printf("\nEl resultado del factorial es %.2f\n",resultado);
        retorno=0;
        printf("retorno %d\n",retorno);
    }else
        {
            printf("\nERROR, el resultado excede o es menor al limite\n");
            printf("retorno %d\n",retorno);
        }
    return retorno;
}

/** \brief realiza varias funciones de calculo.
 *
 * \param primerOperando float // obtiene el numero a calcular.
 * \param segundoOperando float // obtiene el numero a calcular.
 * \return int // retorna 0 si no hay error -1 si hay error.
 *
 */
float todasLasFunciones (float primerOperando, float segundoOperando)
{
    operacionSuma(primerOperando,segundoOperando);
    operacionResta(primerOperando,segundoOperando);
    operacionDivision(primerOperando,segundoOperando);
    operacionMultiplicacion(primerOperando,segundoOperando);
    operacionFactorial(primerOperando);

    return 0;
}
