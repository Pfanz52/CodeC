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
    gets(c);
    printf("so ky tu trong cau: %d\n",strlen(c));
    
    int cnt =0;
    for(int i =0;i<strlen(c);i++)
    {
        c[i]=tolower(c[i]);
        if(c[i]=='a'||c[i] == 'e'|| c[i]=='u'|| c[i]=='i'|| c[i]=='o')
        {
            cnt++;
        }
    }
    printf("so ky tu nguyen am: %d va phan tram: %.2lf %%\n",cnt,100.0*cnt/strlen(c));
// chuan hoa
    printf("da chuan hoa: ");
    char* chuanhoa=strtok(c," \n\t"); int Space =0;
    while(chuanhoa!=NULL)
    {   ++Space;
        inhoa(chuanhoa);
        printf("%s ",chuanhoa);
        chuanhoa=strtok(NULL," \n\t");
    }
    

    printf("\nso tu trong cau: %d ",Space);
    


    return 0;
}