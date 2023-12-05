#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    /*bien luu tru ket qua cua n!
    luu y can khoi tao gia tri cho bien nay = 1*/
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}

