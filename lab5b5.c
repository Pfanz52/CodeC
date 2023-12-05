#include<stdio.h>
int main(){
    int n,  du;
    int tong = 0;
    printf("Nhap so nguyen duong ");
    scanf("%d", &n );
    if(n >0){ for(;n > 0; n /= 10){printf("Tong cac chu so cua cua no la ");
    du = n % 10;
    tong += du;
    printf("%d",tong);}
}else printf("Nhap lai so nguyen duong");
    return 0;
}