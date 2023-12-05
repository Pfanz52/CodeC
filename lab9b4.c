#include<stdio.h>
    int choice();//tra ve dung gia tri nhap

    void box(int n);//thuc hien lua chon

   
int main()
{
    int n;
    
    do
    {
    printf("+-------------------------------------------------+\n");
    printf("|                    MENU                         |\n");
    printf("+-------------------------------------------------+\n");
    printf("| 1. Menu 1                                       |\n");
    printf("| 2. Menu 2                                       |\n");
    printf("| 3. Mene 3                                       |\n");
    printf("| 4. Menu 4                                       |\n");
    printf("| 5. exit                                         |\n");
    printf("+-------------------------------------------------+\n");
    printf("      Please choose: ");
    
    n =choice();
    box(n);

    } while (n != 5);

    return 0;
}

        //ham1
        int choice()
        {
                int n;
                printf("Nhap lua chon tu [1-5]: ");
                scanf("%d",&n);
                return n;
        }
        //ham 2
        void box(int n)
        {
            switch(n)
            {
                case 1:
                    printf("Ban da lua chon 1:\n");
                    break;
                case 2:
                printf("Ban da lua chon 2:\n");
                    break;
                case 3:
                printf("Ban da lua chon 3:\n");
                    break;
                case 4:
                printf("Ban da lua chon 4:\n");
                    break;
                case 5:
                printf("\nBan da thoat khoi chuong trinh.\n");
                    break;
                default:
                printf("\nLua chon khong hop le. yeu cau nhap lai:\n");
                    
                        while (getchar() != '\n'); //dung chuong trinh khi nhap ky tu
                  
            }
        }
        

        