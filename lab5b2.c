#include<stdio.h>
int main(){
    char kt;
      
    do{printf("Nhap mot ky tu (an Space de dung): ");
        scanf("%c", &kt);
        getchar();
            
    if(kt == ' '){   
            printf("Da dung chong trinh\n");
            
    }
    if( ('A' <= kt && kt <= 'Z') || ('a' <= kt && kt <= 'z'))
    {
        printf("kt '%c' thuoc kieu chu cai \n", kt);
    }
    else if('0' <= kt && kt <= '9')
    {
        printf("Kt '%c' thuoc kieu chu so\n", kt);
    }
    else printf("kt '%c' thuoc kieu ky tu dac biet.\n", kt);
    }while(kt != ' ');
    return 0;
}