#include <stdio.h>

int main() {
    int fibonacci[20]; 
    int n = 20; 

    
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    
    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

  
    printf("Cac so  Fibonacci dau tien la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}
