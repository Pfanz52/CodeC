#include<stdio.h>
#include<string.h>

struct Mark
{
    char subject[80];
    float written;
    float practical;
    float tb;
};
typedef struct Mark  mark;
int main()
{
    mark x;
    printf("Nhap diem cho mon hoc: \n");
    printf("THONG TIN VE DEIM\n");
    printf("____________________________\n");
    printf("\nMon hoc: ");
    gets(x.subject);
    printf("Diem LT: ");
    scanf("%f", &x.written);
    printf("Diem TH: ");
    scanf("%f",&x.practical);
    printf("Diem TB: ");
    scanf("%f",&x.tb);

    getchar();
    printf("THONG TIN VE DIEM\n _________________________\nMon hoc: %s\n Diem LT: %.2f\n Diem TH: %.2f\n Diem TB: %.2f",x.subject,x.written,x.practical,x.tb);

    return 0;
}


