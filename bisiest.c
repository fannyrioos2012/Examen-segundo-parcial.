#include <stdio.h>

int main() {
    
    int a = 0;

    
    printf("Introduzca a�o: ");
    scanf("%d", &a);

   
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
      
        printf("Es bisiesto este a�o\n");
    } else {
        
        printf("No es bisiesto este a�o\n");
    }

 
    return 0;
}
