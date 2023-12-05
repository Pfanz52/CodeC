#include<stdio.h>

int main() {
int n;
printf(" Nhap so phan tu cua day so: ", n);
scanf("%d", &n);
printf("Nhap cac phan tu cua day so: ");
int arr[1000];
for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}
printf("Tong cua so dau tien va so cuoi cung: %d", arr[0] + arr[n - 1]);
    return 0;
}