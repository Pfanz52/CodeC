#include <stdio.h>

int main() {
    // Khai báo biến
    int number, reversedNumber = 0;
// Nhập số có 6 chữ số từ người dùng
    printf("Nhap mot so bat ky: ");
    scanf("%d", &number);
 // Đảo ngược số
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
 // Hiển thị số đảo ngược
    printf("So dao nguoc: %d\n", reversedNumber);

    return 0;
}





