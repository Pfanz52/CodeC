#include<stdio.h>
    int daysof(int a);
    int fibonacci(int n);
int main()
{

    int a;//hien thi day so
    printf("nhap so nguyen a: ");
    scanf("%d",&a);
    daysof(a);

    int n;//hien thi vi tri
    printf("\nnhap mot vi tri bat ky trong day: ");
    scanf("%d",&n);
    int result = fibonacci(n);
    printf("so o vi tri thu %d la: %d \n",n, result);

    return 0;
}

    int daysof(int a)
    {
        int st =0;
        int nd = 1;
        int next;
            printf("Day gom %d so fibonacci day tien la: ", a);
        for(int i =0; i <= a; i++)
        {
            printf("%d ", st);
            next = st + nd;
            st =nd;
            nd =next;
        }
    }

    int fibonacci(int n)
    {
        if(n<=0)
        {
            return 0;
        }
        else  if(n == 1)
        {
            return 1;
        }
        else
        {
            return fibonacci(n-1) + fibonacci(n - 2);
        }
    }