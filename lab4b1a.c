#include<stdio.h>
int main(){
float a,b;
    printf("nhap he so a:");
    scanf("%f", &a);
    printf("nhap he so b:");
    scanf("%f", &b);
    if(a == 0 && b == 0 ){
        printf("phuong trinh co vo so nghiem.");
    } else if(a == 0 && b != 0){
        printf(" phuong trinh vo nghiem.");
    } else {
        printf(" phuong trinh co nghiem la: x =  = %.2f ", -b / a);
    }

    return 0;
}