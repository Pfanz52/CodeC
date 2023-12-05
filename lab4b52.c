#include<stdio.h>
int main(){
    float xa, xb, xc, ya, yb, yc;
     printf("Nhap toa do diem A: ");
    scanf("%f%f", &xa, &ya);
    printf("Nhap toa do diem B: ");
    scanf("%f%f", &xb, &yb);
    printf("Nhap toa do diem C: ");
    scanf("%f%f", &xc, &yc);
        float xab = xb -xa;
        float yab = yb -ya;
        float xbc = xc -xb;
        float ybc = yc -yb;
            if( (xab / xbc) == (yab / ybc)){
                printf("Ba diem A, B, C thang hang.");
            }else {
                printf("Ba diem A, B, C khong thang hang.");
            }
    return 0;

}