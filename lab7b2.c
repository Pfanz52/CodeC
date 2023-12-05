#include<stdio.h>
#include <stdlib.h>
#include <time.h>
    // khai bao mang co 100 phan tu
    // khoi tao sinh to ngau nhien bang thoi gian
    // sinh to ngau nhien gan vao bang
    // In mảng thành 10 hàng 10 cột
    // sap xep bang Bubble Sort
    
int main()
{
    //buoc1
    int a[100];
    //buoc2
    srand(time(NULL));
    //buoc3
    for(int i =0; i <100; i++)
    {
        a[i] = rand() %1001; 
    }
    //buoc4
    for(int i =0; i <100;i++)
    {
        printf("%4d ", a[i]);
        if((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    //buoc5
    for(int i = 0; i<100 -1;i++)
    {
        for(int j = 0; j<100 -i-1;j++)
        {
            if(a[j]<a[j + 1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1] =temp;
            }
        }
    }

    printf("\n mang sau khi duoc sap xep: \n");
    for(int i=0; i<100; i++)
    {
        printf("4%d ", a[i]);
        if((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}