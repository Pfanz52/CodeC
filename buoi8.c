#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int x= 5;
    // // printf("%d \n", &x);
    // // printf("%d", x);
    // // return 0;
    // int *p;
    // p = &x;
    // printf("%d\n", *p);
    //  printf("%d", p);

    // 
    
    int *a;
    int count, i;

    printf("input a size: ");
    scanf("%d", &count);

    //alloc memory
    a= (int*)malloc(count*sizeof(int));
    //input a
    for(i=0;i < count; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", a+i);
    }
    //dislay a
    printf("\na: \n");
    for(i = 0; i<count;i++)
    {
        printf("%8d", a[i]);
        //
    }
        free(a);
    return 0;
}