/* Vargas Rodriguez Carlos Antonio
ejercicio 6 */

#include <stdio.h>

int main()
{
    int num, suma = 0, contador = 0;

    printf("Introduce un numero: ");
    scanf("%d", &num);

    // El ciclo se repite mientras el numero sea distinto de 0
    for (; num != 0; )
    {
        printf("Has introducido el numero %d\n", num);

        suma+=num;
        contador++;

        printf("Introduce otro numero: ");
        scanf("%d", &num);
    }

    printf("Finalizando: Se ha introducido el numero 0\n");
    printf("Has introducido %d numeros (sin contar el 0)\n", contador);
    printf("La suma de los numeros es: %d\n", suma);

    return 0;
}

