#include<stdio.h>
int main()
{
    int n ;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    int a[n];

            printf("Nhap du lieu cho mang %d phan tu: \n",n);
        for(int  i =0; i<n; i++)
        {
            printf("Nhap phan tu thu %d: ", i );
            scanf("%d", &a[i]);
        }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang da duoc sap xep theo chieu tang dan la: ");
    for(int i =0; i <n; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}