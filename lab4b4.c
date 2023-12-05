#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c;
  printf("Nhap cac gia tri a, b, c: \n");
  scanf("%f%f%f", &a, &b, &c);
    if((a < b+c) && ( b < a+c ) && (c < a+b) ){
        printf("a, b, c la ba canh cua mot tam giac");
    }  else {
        printf("a,b,c khong phai ba canh cua mot tam giac");
    }
    return 0;
}