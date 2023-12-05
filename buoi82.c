#include<stdio.h>
int main()
{
    int a[10]={10,21,32,43,54,65,76,87,98,99};
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n i =%d, a[i]=%d,*a(a+i)=%d",i,a[i],*(a+i));
        printf("&a[i]=%d,a+i=%d",&a[i],a+i);
    }
    
    return 0;
}