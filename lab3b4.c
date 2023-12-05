#include <stdio.h>

int main() {
    // Khai báo biến
    float km, mile;
    float conversion_factor = 0.000621371192;

    // Nhập số km từ người dùng
    printf("nhap so kilometer: ");
    scanf("%f", &km);

    // Chuyển đổi km sang mile
    mile = km * conversion_factor*1000;

    // Hiển thị kết quả
    printf("%.6f kilometer = %.6f mile\n", km, mile);

    return 0;
}






