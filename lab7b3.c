#include<stdio.h>
int main()
{
    int n;
    printf("nhap so nguyen trong khoang tu 0 den 1000:");
    scanf("%d", &n);
  
    int a[n];
    
        printf("nhap phan tu thu %d cua mang: \n",n);
    for(int i=0; i < n; i++)
    {
        printf("phan tu thu %d: ", i );
        scanf("%d", &a[i]);
    }

        //sapxep
        for(int i = 0; i < n-1;i++)
        {
            for(int j = i+1; j< n; j++)
            {
                if(a[i] > a[j])
                {
                    int temp = a[i];
                    a[i]= a[j];
                    a[j] = temp;
                }
            }
        }
            for(int i =0; i<n;i++)
            {
                printf("%d ", a[i]);
            }

            //socantim
    int t;
    printf("\n nhap so can tim la: ");
    scanf("%d", &t);

        int left = 0, right = n-1;
        int found = 0;//bien kiem tra

        while(left < right)
        {
            int mid = left+(right - left)/2;
            if(a[mid] == t)
            {
                found = 1;
                printf("so %d co ton tai trong mang va xuat hien dau tien o vi tri %d\n", t, mid );
                break;
            } else
            if(a[mid]<t)
            {
                left = mid +1;
            }else
            right = mid - 1;
        }
    if(!found)
    {
        printf("so %d khong ton tai trong mang \n", t);
    }
   
        
    return 0;
}

