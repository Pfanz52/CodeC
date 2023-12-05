#include<stdio.h>
#include<math.h>
int main(){
    float r, h;
    printf("Nhap so ban kinh:");
    scanf("%f", &r);
    printf("Nhap vao so chieu cao:");
    scanf("%f", &h);
    float S; float V; 
   
S =  (M_PI) * r*r ;
V = S * h;
    printf(" Dien tich day S = %.2f\n",S );
    printf(" The tich hinh tru V = %.2f",V );

    return 0;
}