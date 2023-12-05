#include<stdio.h>

int main() {
    int n;
    printf("Nhap vao kich thuoc tap hop: ");
    scanf("%d", &n);
    int arr[1000];
    printf("Nhap cac phan tu trong tap hop: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    printf("Tong cua cac so le trong tap hop: ");
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0 && arr[i] > 0){
            sum += arr[i];
            
        }
    }
    printf("%d", sum);
    return 0;
}
