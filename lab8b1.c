#include<stdio.h>
int main()
{
    int a,b;
    printf("nhap so nguyen a:\n");
    scanf("%d", &a);
    printf("nhap so nguyen b:\n");
    scanf("%d", &b);
    int *pa;
    int *pb;
    pa = &a;
    pb = &b;
printf("gia tri a truoc khi bien doi: %d\n ",a);
printf("dia chi a truoc khi bien doi: %d\n ",pa);
printf("gia tri b truoc khi bien doi: %d\n ",b);
printf("dia chi b truoc khi bien doi: %d\n ",pb);
int tem;
    tem =a;
    a = b;
    b= tem;
    printf("sau khi hoan doi gia tri a: %d\n ",a);
    printf("sau khi hoan doi gia tri b: %d\n ",b);

    
    int *temp = pa;
    pa = pb;
    pb = temp;
    printf("sau khi hoan doi dia chi pa: %d\n",pa);
    printf("sau khi hoan doi dia chi pb: %d\n",pb);

     

    return 0;
}