#include<stdio.h>
    int power(int a, int n);
    int main()
    {
        int a, n;
        printf("nhap  so nguyen a: ");
        scanf("%d", &a);
        printf("nhap  so nguyen n: ");
        scanf("%d", &n);
        int ret;

        ret = power(a,n);
        if(n >=0)

        {
            printf("ket qua la: (%d)^%d = %d", a, n, ret);
        }else
                printf("khong ho tro tinh luy thua am, nhap lai n > 0.");
                while(getchar() != '\n');
        return 0;
    }
        int power(int a, int n)
        {
            int result;
            result =1;
            if(n >= 0)
            {
            for(int i=0;i<n;i++)
            {
                result = result * a;
            }
            return result;
            }    
        }