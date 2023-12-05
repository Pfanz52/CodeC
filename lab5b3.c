#include<stdio.h>
int main(){
    int n;
    printf("Cac so chia het cho 9 la: ");
    
    for(n = 200; n < 300; n+=1){
     if(n % 9 == 0){
    printf("%d ", n);
        n += 1;
    }
    }
    
    
    return 0 ;
}