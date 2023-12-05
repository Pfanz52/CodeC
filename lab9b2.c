#include<stdio.h>
#include<math.h>

    int inputNumber();

    int checkNumber(int num);
    
    int arrange(int num);

int main()
{
    int arr[7]; //mang luu so nguyen nhap vao
    int countsnt = 0;//theo doi snt
    int snt[7]; //mang luu snt
    
        printf("nhap 7 so nguyen tu ban phim:\n");
    
    //ganham
    for(int i =0; i<7;i++)
    {
        arr[i]=inputNumber();
        if(checkNumber(arr[i]))
        {
            snt[countsnt] = arr[i];
            countsnt++;
        }
    }
    printf("cac so nguyen to co trong mang: \n");
    for(int i =0; i<countsnt;i++)
    {
        printf("%d ",snt[i]);
    }
    printf("\n");

    return 0;
}
    
//ham1
     int inputNumber()
     {
        int num;
        printf("nhap vao so nguyen: ");
        scanf("%d",&num);
        return num;
     }

//ham2
    int checkNumber(int num)
    {
        if(num <= 1)
        {
        return 0;
        }
        for(int i = 2; i<= sqrt(num);i++)
        {
            if(num % i == 0)
            {
                return 0;
        }
            }
            return 1;
    }
    