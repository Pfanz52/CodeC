// #include<stdio.h>
//     int max(int num1, int num2);
    
// int main()
// {
    
//     int a =100;
//     int b= 200;
//     int ret;

//     ret = max(a,b);

//     printf("Max value is %d\n", ret);


//     return 0;
// }
//  int max(int num1, int num2)
//     {int result;
//     if (num1 > num2)
//     result = num1;
//     else
//     result = num2;
//     return result;}

   
//    #include<stdio.h>
//    void swap(int x, int y);

//    int main()
//    { 
//     int a = 100;
//     int b = 200;

//     printf("before swap, value of a: %d\n",a);
//     printf("before swap, value of b: %d\n",b);

//     swap(a,b);

//     printf("after swap, value of a: %d\n",a);
//     printf("after swap, value of b: %d\n",b);

//     return 0;
//    }
//    void swap(int x , int y)
//    {
//     int temp;
//     temp =x;
//     x =y;
//     y = temp;
//     return;
//    }

// #include<stdio.h>
//    void swap(int *x, int *y);

//    int main()
//    { 
//     int a = 100;
//     int b = 200;

//     printf("before swap, value of a: %d\n",a);
//     printf("before swap, value of b: %d\n",b);

//     swap(&a,&b);

//     printf("after swap, value of a: %d\n",a);
//     printf("after swap, value of b: %d\n",b);

//     return 0;
//    }
//    void swap(int *x , int *y)
//    {
//     int temp;
//     temp =*x;
//     *x =*y;
//     *y = temp;
//     return;
//    }

#include <stdio.h>

// Nguyên mẫu hàm
int inputNumber();
int checkNumber(int num);

int main() {
    int arr[7];
    int primeNumbers[7]; // Mảng lưu các số nguyên tố
    int primeCount = 0; // Số lượng số nguyên tố trong mảng

    // Nhập dữ liệu cho mảng
    printf("nhap 7 so nguyen:\n");
    for (int i = 0; i < 7; i++) {
        arr[i] = inputNumber();
        if (checkNumber(arr[i])) {
            primeNumbers[primeCount] = arr[i];
            primeCount++;
        }
    }

    // In danh sách các số nguyên tố
    printf("danh sach cac so nguyen to trong mang:\n");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primeNumbers[i]);
    }
    printf("\n");

    return 0;
}

// Định nghĩa hàm nhập số nguyên từ bàn phím
int inputNumber() {
    int num;
    printf("nhap so: ");
    scanf("%d", &num);
    return num;
}

// Định nghĩa hàm kiểm tra số nguyên tố
int checkNumber(int num) {
    if (num <= 1) {
        return 0; // Không phải số nguyên tố
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Không phải số nguyên tố
        }
    }
    return 1; // Là số nguyên tố
}
