#include<stdio.h>
int main()
{ int n, k;
int arr[1000];
printf("Nhap kich thuoc cua tap hop ");
scanf("%d", &n);
printf("Nhap so trong tap hop: ");
for(int i =0; i < n; i++){    
    scanf("%d", &arr[i]);
}
printf("Nhap gia tri muon dem: ");
scanf("%d", &k); 
int count = 0;
printf("So phan tu co gia tri %d la ",k);
    for(int i =0; i < n; i ++){
        if( arr[i]  == k){
            count++;
        }
    }
printf("%d", count);
    return 0;
}