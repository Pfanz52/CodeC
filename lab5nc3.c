#include<stdio.h>

    int is_prime(int n) {
        for(int i = 2; i <= n; i++){
            if (n %i ==0 )
            {
            printf("khong phai la so nguyen to la: ");
            }      
          }  return 1;
                
}
int main() {
    int n;
    printf("nhap so n");
    scanf("%d", &n);
    printf("day cac so nguyen to tu 1 den n ",n);
    for (int j = 2; j <= n; j++) {
        int isPrime = 1;
    }
            
            for(int j =2; j<=n; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
        if(isPrime){
            printf("%d",i);
            }
        
    return 0;
}