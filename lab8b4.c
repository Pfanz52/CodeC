#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("nhap so nguyen bat ky:");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("nhap lai so nguyen duong: \n");
        scanf("%d", &n);
    }

    float *a = (float *)malloc(n*sizeof(float));
    if (a == NULL) 
        {
        printf("khong du bo nho cap phat.\n");
        return 1;
        }

    printf("nhap du lieu cho mang so thuc:\n",n);
        for(int i=0;i<n;i++)
        {
        printf("nhap phan tu thu [%d] cua mang: ",i);
        scanf("%f",&a[i]);
        }

        printf("mang so thuc sau khi nhap: ");

        for(int i=0;i<n;i++)
        {
            printf("%.2f ",a[i]);
        }
        printf("\n");
        free(a);
    return 0;
}