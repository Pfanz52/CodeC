#include <stdio.h>

int main() {
    float num1, num2;
    int choice;
    
    // Prompt for and read num1
    printf("Nhập số thứ nhất (num1): ");
    scanf("%f", &num1);
    
    // Flush the input buffer to consume the newline character
    while (getchar() != '\n');
    
    // Prompt for and read num2
    printf("Nhập số thứ hai (num2): ");
    scanf("%f", &num2);
    
    // Flush the input buffer to consume the newline character
    while (getchar() != '\n');
    
    // Display the menu for the user
    printf("Chọn phép tính:\n");
    printf("1. Cộng\n");
    printf("2. Trừ\n");
    printf("3. Nhân\n");
    printf("4. Chia\n");
    printf("Nhập lựa chọn của bạn (1-4): ");
    
    // Read the user's choice
    choice = getchar() - '0'; // Convert the character to an integer
    
    // Flush the input buffer to consume the newline character
    while (getchar() != '\n');
    
    // Perform the selected operation and display the result
    switch (choice) {
        case 1:
            printf("Kết quả: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Kết quả: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Kết quả: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Kết quả: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Lỗi: Không thể chia cho 0.\n");
            }
            break;
        default:
            printf("Lựa chọn không hợp lệ.\n");
    }
    
    return 0;
}
