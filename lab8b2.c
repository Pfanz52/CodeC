#include<stdio.h>
int main()
{
    int a[5];
    int *ptr = a;
    printf("nhap du lieu cho mang: \n");
  //nhap du lieu thong qua con tro
    for(int i =0; i <5;i++)
    {
    printf("phan tu thu %d la: ", i);
    scanf("%d", ptr +i);
    }
    //hien thi mang bang cach dung con tro mang
    printf("mang da nhap la: ");
        for(int i = 0; i<5;i++)
        {
            printf("%d ",*(ptr + i));
        }
    
    return 0;
}