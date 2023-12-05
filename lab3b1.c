#include<stdio.h>
int main() {
    // Khai bao bien
    float num1, num2, temp;
    // Nhap hai so bat ky
    printf("Nhap vao so thu nhat num1: ");
    scanf("%f", &num1);
    printf("Nhap vao so thu hai num2: ");
    scanf("%f", &num2);   
    // Hoan doi vi tri hai so
    temp = num1;
    num1 = num2;
    num2 = temp;  
    // Tang moi so them 1 don vi
    num1 += 1;
    num2 += 1;   
    // Hien thij ket qua
    printf("So thu nhat sau khi hoan doi va tang 1 don vi: %.0f\n", num1);
    printf("So thu hai sau khi hoan doi va tang 1 don vi: %.0f\n", num2);
    
    return 0;
}






