#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int arr[5]; 
    int count = 0; 

    printf("Nhap 5 so nguyen to:\n");

    while (count < 5) {
        int num;
        printf("nhap so thu %d: ", count + 1);
        scanf("%d", &num);

        if (isPrime(num)) {
            arr[count] = num;
            count++;
        } else {
            printf("So ban nhap khong phai so nguyen to. Hay nhap lai.\n");
        }
    }

    printf("Cac so nguyen to da nhap:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}