#include<stdio.h>
#include<math.h>
int main(){
    float xa, xb, xc;
    float ya, yb, yc;
    printf("Nhap toa do diem A: ");
    scanf("%f%f", &xa, &ya);
    printf("Nhap toa do diem B: ");
    scanf("%f%f", &xb, &yb);
    printf("Nhap toa do diem C: ");
    scanf("%f%f", &xc, &yc);

    float x1 = xb - xa;
    float x2 = xc - xb;
    float y1 = yb - ya;
    float y2 = yc - yb;
    float AB = sqrt(x1*x1 + y1*y1);
    float BC = sqrt(x2*x2 + y2*y2);
    float TVH = x1*x2 + y1*y2;
    float TDD = AB * BC;
    float cos = TVH / TDD;

    if(cos == 1 || cos == -1){
        printf("Ba diem A, B, C thang hang.");

    }else {
        printf(" Ba diem A, B, C khong thang hang.");
    }

    return 0;
}