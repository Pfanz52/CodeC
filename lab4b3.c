#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);
    printf("Nhap so d: ");
    scanf("%d", &d);
    #include<stdio.h>


    if( a > b && a > c && a > d){
        printf("so lon nhat la a: Max = %d \n", a);
    } else if( b > a && b > c && b > d){
        printf("so lon nhat la: Max = %d \n",b);
    } else if(c >a && c > b && c > d)
    {printf("so lon nhat la c: Max = %d \n",c);
    }else {
        printf("so lon nhat la: Max = %d \n",d);
    }

     if( a < b && a < c && a < d){
        printf("so be nhat la a: Min = %d \n", a);
    } else if( b < a && b < c && b < d){
        printf("so be nhat la: Min = %d \n",b);
    } else if(c <a && c < b && c < d)
    {printf("so be nhat la c: Min = %d \n",c);
    }else {
        printf("so be nhat la: Min = %d \n",d);
    }








   

    return 0;
}