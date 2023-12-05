#include<stdio.h>
int main()
{
    int n;

    printf("    MENU \n");
    printf("=====================================\n");
    printf("1. nhap them mot phan tu\n");
    printf("2. sua phan tu tho vi tri cua mang\n");
    printf("3. xoa phan tu cua mang theo vi tri\n");
    printf("4. tim kiem tuyen tinh mot phan tu trong mang\n");
    printf("5. tim kiem nhi phan mot phan tu trong mang\n");
    printf("6. sap xep theo chieu giam dan\n");
    printf("7. chen them mot phan tu cho mang sao cho danh sach sap xep van duoc  bao toan\n");
    printf("8. hien thi mang\n");
    printf("0. thoat chuong trinh\n");
    printf("==========================================\n");
    printf("Moi ban chon:");
    scanf("%d", &n);
    getchar();
    do{
            printf("Chon so thich cua ban (1-4) hoac chonj 5 de thoat chuong trinh: ");
            scanf("%d", &n);

    switch(n)
    {
        case 1:
        printf("lua chon cua ban la: nhap them mot phan tu \n");
        break;
        case 2:
        printf("lua chon cua ban la: sua phan tu tho vi tri cua mang \n");
         break;
        case 3:
        printf("lua chon cua ban la: xoa phan tu cua mang theo vi tri \n");
         break;
        case 4:
        printf("lua chon cua ban la: tim kiem tuyen tinh mot phan tu trong mang \n");
         break;
        case 5:
        printf("lua chon cua ban la: tim kiem nhi phan mot phan tu trong mang \n");
         break;
        case 6:
        printf("lua chon cua ban la: sap xep theo chieu giam dan \n");
         break;
        case 7:
        printf("lua chon cua ban la: chen them mot phan tu cho mang sao cho danh sach sap xep van duoc  bao toan \n");
         break;
        case 8:
        printf("lua chon cua ban la: hien thi mang \n");
         break;
        case 0:
        printf("lua chon cua ban la: thoat chuong trinh \n");
        break;
    default:
                        printf("Nhap lai so trong bang\n");
                    break;  

    }
    return 0;
}