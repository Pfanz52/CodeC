#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // khai bao mang co 100 phan tu
    int arr[100];

    // khoi tao sinh to ngau nhien bang thoi gian
    srand(time(NULL));

    // sinh to ngau nhien gan vao bang
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 1001; // sin to ngau nhien tu 0 den 1000
    }

    // In mảng thành 10 hàng 10 cột
    for (int i = 0; i < 100; i++) {
        printf("%4d ", arr[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    // sap xep bang Bubble Sort
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi giá trị
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < 100; i++) {
        printf("%4d ", arr[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
