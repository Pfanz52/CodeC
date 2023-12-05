#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Nhap mot chuoi ky tu: ");
    
    gets(str);
    printf("chuoi ky tu vua nhap: %s",str);
    
    char c;
    printf("\nNhap mot ky tu bat ky: ");
    scanf("%c", &c);
    getchar();
    printf("ky tu ban vua nhap   : %c",c);
    

    int dem;
        dem =0;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]==c)
            {
                dem++;
            }
        }
            printf("\nso lan xuat hien cua ky tu trong chuoi: ");
            printf("%d",dem);
    return 0;
}