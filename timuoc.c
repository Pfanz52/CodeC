#include<stdio.h>

int main() {
    unsigned n;
    scanf("%u", &n);
    for(unsigned i = 1; i <= n; i ++){
        if(n % i == 0){
            printf( "%u ", i);
        }
    }
    return 0;
}