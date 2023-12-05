#include<stdio.h>
int main()
{
    int a[10];
    int max ;
    int min ;
    int demMax;
    int demMin ;
    for(int i =0;i<10;i++)
    {
    printf("Nhap phan tu thu %d la: ", i);
    scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    demMax = demMin =1;
for(int i =1;i<10;i++)
        {
            if( a[i] > max)
            {
                max = a[i];
                demMax =1;
            }else 
            if( a[i] == max)
            {
                demMax++;
            }
            if(a[i] < min)
            {
                min = a[i];
                demMin = 1;
            }else
            if( a[i] == min)
            {  
                 demMin++;
            }
        }
    printf("GTLN: %d, Xuat hien: %d lan\n ", max, demMax);  
    printf("GTNN: %d, Xuat hien: %d lan\n ", min, demMin);  
    return 0;
}