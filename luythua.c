#include<stdio.h>
    double power(double a, double n);
    double main()
    {
        double a, n;
        printf("nhap  so nguyen a: ");
        scanf("%lf", &a);
        printf("nhap  so nguyen n: ");
        scanf("%lf", &n);
        double ret;

        ret = power(a,n);
        if(n >=0)

        {
            printf("ket qua la: (%.2lf)^%.2lf = %.2lf", a, n, ret);
        }else
                printf("ket qua la: (%.2lf)^(%.2lf) = %.7lf", a, n, ret);
                
        return 0;
    }
        double power(double a, double n)
        {
            double result;
            result =1;
            if(n >= 0)
            {
            for(double i=0;i<n;i++)
            {
                result = result * a;
            }
            return result;
            } else
            for(double i =0; i>n;i--)
            {
                result = result/a;
            }   
            return result;
        }