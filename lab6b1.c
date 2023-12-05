#include<stdio.h>
int main()
{
    int a[10] ;
    scanf("%d", &a[10]);
    
    for(int i = 0; i <10; i++ )
    {
    printf("Nhap gia tri thu %d la: ",i);
        scanf("%d", &a[i]);
    }
    printf("cac phan tu o vi tri chan la: \n");
    for(int i =0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}