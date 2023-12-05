#include<stdio.h>
int main(){
    char kt;
    printf("Nhap ky tu bat ky:");
    scanf("%c", &kt);
    if(('A' <= kt && kt <= 'Z' )|| ('a' <= kt && kt <= 'z')){
        if(kt =='A'|| kt == 'E'|| kt == 'U'|| kt =='I'|| kt =='O'|| 
        kt =='a'|| kt == 'e'|| kt == 'u'|| kt =='i'|| kt =='o'){
            printf("Ky tu %c la nguyen am");
        }else {
            printf("Ky tu %c la phu am");
        }
    }else
    {printf("Ky tu %c khong thuoc Alphabet");
    }
        
     return 0;
}