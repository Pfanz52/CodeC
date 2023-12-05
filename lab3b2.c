#include <stdio.h>

int main() {
    // Khai báo biến
    float x, y, result;
    
    // Nhập giá trị của x và y từ người dùng
    printf("Nhap gia tri cua x: ");
    scanf("%f", &x);
    printf("Nhap gia tri cua y: ");
    scanf("%f", &y);
    
    // Tính giá trị của biểu thức
    result = x*x*x + 3*x*x + 3*x*y*y + y*y*y;
    
    // Hiển thị kết quả
    printf("Gia tri cua bieu thuc la: %.2f\n", result);
    
    return 0;
}