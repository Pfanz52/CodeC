#include<stdio.h>
#include<string.h>
#include<ctype.h>

void khoangcach(char *chuoi);
void khoangtrang(char *chuoi);
void chuanhoachuoi(char *chuoi)
{
    khoangtrang(chuoi);
    khoangcach(chuoi);
   
    
}
int main()
{
    char chuoi[1000];
    printf("Nhap chuoi ky tu bat ky : ");
    gets(chuoi);
    chuanhoachuoi(chuoi);
    // printf("Chuoi ky tu ban vua nhap: '%s' ",chuoi);
    for(int i =0; i<strlen(chuoi);i++)
    {
        if(chuoi[0]>='a'&& chuoi[0] <='z')
        {
            chuoi[0]-='a'-'A';
        }
    }
    printf("\nChuoi ky tu da chuan hoa: %s ",chuoi);

    return 0;
}

//1
void khoangtrang(char *chuoi)
{
int i=0;
int j = strlen(chuoi)-1;
//kiem tra khoang trang dau chuoi
while(chuoi[i]==' ' || chuoi[i]=='\t'|| chuoi[i]=='\n')
{
    i++;
}
//kiem tra khoang trang cuoi chuoi
while(chuoi[j]==' '|| chuoi[j]=='\t'||chuoi[j]=='\n')
{
    j--;
}

    for(int k =0; k< j-1;k++)
    {
        chuoi[k]=chuoi[i+k];
    }
chuoi[j-i+1]='\0';

}

//2
void khoangcach(char *chuoi)
{
   
        int len = strlen(chuoi);
    int i, j = 0;
    int dangLaKhoangTrang = 0;

    for (i = 0; i < len; i++) {
        if (chuoi[i] == ' ' || chuoi[i] == '\t') {
            dangLaKhoangTrang = 1;
        } else {
            if (dangLaKhoangTrang) {
                chuoi[j++] = ' '; // them 1 dau cach
                dangLaKhoangTrang = 0;
            }
            chuoi[j++] = chuoi[i];
        }
    }

    chuoi[j] = '\0'; // ket thuc chuoi moi
}

    