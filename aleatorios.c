#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcion;
    srand(time(NULL)); 

    do {
       
        opcion = rand() % 5 + 1;

        
        int valor1 = rand() % 10;  
        int valor2 = rand() % 10;

        
        switch (opcion) {
            case 1:
                printf("Suma: %d + %d = %d\n", valor1, valor2, valor1 + valor2);
                break;
            case 2:
                printf("Resta: %d - %d = %d\n", valor1, valor2, valor1 - valor2);
                break;
            case 3:
                printf("Multiplicacion: %d * %d = %d\n", valor1, valor2, valor1 * valor2);
                break;
            case 4:
            
                if (valor2 != 0) {
                    printf("Division: %d / %d = %.2f\n", valor1, valor2, (float)valor1 / valor2);
                } else {
                    printf("Division por cero. Intenta de nuevo.\n");
                }
                break;
            case 5:
                printf("Programa terminado.\n");
                break;
            default:
                printf("Opción no válida. Intenta de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}

