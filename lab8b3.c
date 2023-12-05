#include<stdio.h>
int main()
{
    int a[5], b[5];
    int *pa =a;
    int *pb = b;
        printf("nhap gia tri cho 2 mang:\n");
        for(int i =0; i<5;i++){
            printf("nhap gia tri thu %d cua mang a: ",i);
            scanf("%d", pa+i);
        }
        // printf("%d",*(pa+i));
            printf("\n======================== \n");

        for(int i =0; i<5;i++){
            printf("nhap gia tri thu %d cua mang b: ",i);
            scanf("%d", pb+i);
        }
       
    int c[5];
    int *pc = c;

        for(int i =0; i<5;i++)
        {
            *(pc + i) = *(pa+i)+*(pb+i);
           
        }
        printf("mag a: ");
        for(int i=0;i<5;i++) 
        {
            printf("%d ",*(pa+i));
        }
            printf("\n");
        printf("mag b: ");
        for(int i=0;i<5;i++) 
        {
            printf("%d ",*(pb+i));
        }
            printf("\n");
        printf("mang c: ");
        for(int i=0;i<5;i++)    
    {
        printf("%d ",*(pc+i));
    }
    return 0;
}