#include <stdio.h>

int main() {
    
    int a = 0;

    
    printf("Introduzca año: ");
    scanf("%d", &a);

   
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
      
        printf("Es bisiesto este año\n");
    } else {
        
        printf("No es bisiesto este año\n");
    }

 
    return 0;
}
