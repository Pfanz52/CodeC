#include <stdio.h>
int main() {
    // Khai báo biến
    int num1, num2;
// Nhập hai số nguyên từ người dùng
    printf("nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("nhap so nguyen thu  hai: ");
    scanf("%d", &num2);
// Phép AND bitwise
    int and_result = num1 & num2;
// Phép OR bitwise
    int or_result = num1 | num2;
// Phép XOR bitwise
    int xor_result = num1 ^ num2;
// Phép NOT bitwise
    int not_result = ~num1;
 // Hiển thị kết quả
    printf("phep AND: %d\n", and_result);
    printf("phep OR: %d\n", or_result);
    printf("phep XOR: %d\n", xor_result);
    printf("phep NOT (so thu nhat): %d\n", not_result);
return 0;
}