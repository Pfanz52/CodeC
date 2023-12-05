#include<stdio.h>
int main(){
    int a, b, c;
    printf("nhap he so a:");
    scanf("%d", &a);
    printf("nhap he so b:");
    scanf("%d", &b);
    printf("nhap he so c:");
    scanf("%d", &c);

    if( a > b && a > c){
        printf("so lon nhat la a: Max = %d", a);
    } else if( b > a && b > c ){
        printf("so lon nhat la: Max = %d",b);
    } else 
    printf("so lon nhat la c: Max = %d",c);

    return 0;
}