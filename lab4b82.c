#include<stdio.h>
int main(){
    float a, b;
    int c;

    printf("Nhap so thu nhat ");
    scanf("%f", &a);
    while (getchar() != '\n');
    printf("Nhap so thu hai ");
    scanf("%f", &b);
    while (getchar() != '\n');
    printf(" MENU\n");
    printf("===================\n");
    printf(" +\n");
    printf(" -\n");
    printf(" x\n");
    printf(" :\n");
    printf("===================\n");


printf("Chon phep tinh (1-4): \n");

    c = getchar() - '0'; 
    while (getchar() != '\n');

switch (c) {
	case 1:
		printf("Tong: a + b = %.2f + %.2f = %.2f \n",a, b, a + b);
		break;
	case 2:
		printf("Hieu: a - b = %.2f - %.2f = %.2f \n",a, b, a - b);
		break;
	case 3:
		printf("Tich: a x b = %.2f * %.2f = %.2f \n",a, b, a * b);
		break;
	case 4:
		if (b != 0) {
                printf("Thuong: %.2f / %.2f = %.2f\n", a, b, a / b);
            } else {
                printf("khong the chia cho so 0.\n");
            }
            break;
    default:
        printf("chon sai");
        
}
    return 0;
}