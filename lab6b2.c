#include<stdio.h>
int main()
{
    int a[10] = {0};
    float b[5];
    for(int i =0; i < 5; i++)
    {
        printf("Nhap cac phan tu thu %d la: ",i);
        scanf("%f", &b[i]);
    }
for(int i =1;i<10;i+=2)
    {
        a[2*i + 1] = (int)b[i/2];
    }
        printf(" mang a: \n");
        for(int i = 0; i<10;i++)
        {
            printf("%d ",a[i]);
        }

        printf("\n mang b: \n");
        for(int i=0;i<5;i++)
        {
            printf("%.2f ", b[i]);
        }
    return 0;
}