#include<stdio.h>
int main(){
    int a, b;
    printf("Nhap hai so a va b ");
    scanf("%d%d", &a, &b);
    if(a ==0 ){
        if(b==0){
            printf("pt dung voi moi nghiem");
        }
        else 
            printf("pt vo nghiem");
    }
    else 
        printf("pt co nghiem la: x = -b / a = %5f",-1.0*b/a);
        return 0;
}