#include <stdio.h>

int main() {
    
    int v1, v2, v3;

    
    printf("Asigne el valor para v1: ");
    scanf("%d", &v1);

    printf("Asigne el valor para v2: ");
    scanf("%d", &v2);

    printf("Asigne el valor para v3: ");
    scanf("%d", &v3);

    
    int temp;

    
    temp = v1;

    v1 = v2;
    
    v2 = v3;

    v3 = temp;

    printf("\nDespu�s del intercambio:\n");
    printf("v1: %d\n", v1);
    printf("v2: %d\n", v2);
    printf("v3: %d\n", v3);

    return 0;
}

