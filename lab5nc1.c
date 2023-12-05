#include<stdio.h>
int main(){
    int n, m;
    printf("nhap hai so nguyen n va m ");
    scanf("%d %d", &n, &m);
            printf("day so chia het cho 7 la:\n");
    for(int i = n; i <= m; i++){
        if(i % 7 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}