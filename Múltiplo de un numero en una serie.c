#include <stdio.h>

int main() {
    
    int numero =1;

    
    while (numero <= 100) {
        
        if (numero % 3 == 0) {
            printf("%d Este numero multiplo de 3\n", numero);
        } else {
            printf("%d No es multiplo de 3\n",numero);
        }

       
        numero+=1;
    }

    
    return 0;
}

