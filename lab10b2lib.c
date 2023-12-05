#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

    void inhoa(char *c)
    {
        for(int i =0; i< strlen(c);i++)
        {
            c[i]=tolower(c[i]);
        }
        c[0]=toupper(c[0]);
    }

int main()
{
    char c[1000];
    printf("Nhap vao chuoi ky tu bat ky: ");
    gets(c);
    printf("da chuan hoa: ");
    char* chuanhoa=strtok(c," \n\t");
    while(chuanhoa!=NULL)
    {
        inhoa(chuanhoa);
        printf("%s ",chuanhoa);
        chuanhoa=strtok(NULL," \n\t");
    }

    return 0;
}