#include<stdio.h>
 void fibonasi_sequence(int n) {
        int first = 0;
        int second = 1;
        printf(" Day fibonasi gom %d so dau tien la:  " , n );
        for(int i = 0; i <= n ; i ++){
            printf(" %d ", first);
            int next = first + second;
            first = second;
            second = next;
        }
        }
        int main() 
        {
            int n;
            printf(" Nhap vao so n:  ");
            scanf("%d", &n);
            fibonasi_sequence(n);
   
    return 0;
}