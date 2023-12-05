#include<stdio.h>
int main()
{
    int a[1000], i , dem =1000;
    int f;
    for(i=0; i<dem;i++)
    {
        a[i]= i +1;

    }
    printf("hien thi so: ");
    scanf("%d", &f);
    int step =0, findex = -1;
    for(i=0;i<dem;i++,step++)
    {
        if(a[i]==f)
        {
            findex = 1;
            break;
        }
    }
    if(findex == -1)
    {
        printf("%d khong co trong mang.\n",f);

    }else
    {
        printf("%d co trong mang va o index %d sau %d steps.\n",f,findex,step);
    }
    return 0;
}