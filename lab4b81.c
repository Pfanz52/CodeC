#include<stdio.h>
int main(){
    double a,b;
    char c;
    printf("Nhap so thu nhat:");
    scanf("%lf", &a);
    printf("Nhap so thu hai:");
    scanf("%lf", &b);

    printf("MENU\n");
    printf("======================\n");
    printf("+.\n");
    printf("-.\n");
    printf("x.\n");
    printf(":.\n");
    printf("Chon phep tinh (+, -, x, :): ");
    //getchar();
    scanf(" %c", &c);

    switch(c) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf \n", a, b, a+b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf \n", a, b, a-b);
            break;
        case 'x':
            printf("%.2lf x %.2lf = %.2lf \n", a, b, a*b);
            break;
        case ':':
            if(b != 0){
                printf("%.2lf : %.2lf = %.2lf \n", a, b, a/b);
            }else {
                printf("Khong co phep chia cho so 0\n");
            }
            break;
        default:
            {   printf("Nhap lai dau thich hop\n");}
            break;
    }
    
    return 0;
}