#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
   void inthuong(char *chuoi)
   {
    int j =0;
    for(int i =0; i<strlen(chuoi);i++)
   {if(chuoi[i]>='a'&& chuoi[i]<= 'z'|| chuoi[i]>='A'&&chuoi[i]<='Z')

    {chuoi[j++]=tolower(chuoi[i]);}

   }
   chuoi[j++]='\0';
   }
   int kiemtradoixung(char *chuoi)
   {
    for(int i =0;i<strlen(chuoi)/2;i++)
    {
        if(chuoi[i]!=chuoi[strlen(chuoi)-i-1])
        {
        return 0;
        }
        return 1;
    }    

   }
int main()
{
    char chuoi[100];
    gets(chuoi);
    printf("chuoi nhap vao: %s",chuoi);
    inthuong(chuoi);
    printf("\nda chinh sua  : %s",chuoi);
    
    int ketqua = kiemtradoixung(chuoi);
        if(ketqua)
        {
         printf("\n%s  doi xung",chuoi);

        }else
        {
         printf("\n%s  khong doi xung",chuoi);
        }
    return 0;
}

    


