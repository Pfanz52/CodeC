#include<stdio.h>
int main(){
    int c;
    printf("SO THICH CA NHAN\n");
    printf("======================\n");
    printf("1. Doc sach.\n");
    printf("2. Nghe nhac.\n");
    printf("3. Choi the thao.\n");
    printf("4. May tinh.\n");
    printf("5. Thoat.\n");
    printf("============================\n");
    printf("Chon: ");
        do{
            printf("Chon so thich cua ban (1-4) hoac chonj 5 de thoat chuong trinh: ");
            scanf("%d", &c);
        switch (c)
            {
                case 1:
                        printf("SO THICH CUA BAN la: Doc sach\n");
                    break;
                case 2:
                        printf("SO THICH CUA BAN la: Nghe nhac\n");
                    break;
                case 3:
                        printf("SO THICH CUA BAN la: Choi the thao\n");
                    break;
                case 4: 
                        printf("SO THICH CUA BAN la: May tinh\n");
                    break;
                case 5:
                        printf("Da thoat chuong trinh\n");
                    break;
                 default:
                        printf("Nhap lai so trong bang\n");
                    break;  
            }
    } while (c != 5);
    return 0;
}