#include<stdio.h>

int main() {
int n;
printf("Nhap kich thuoc cua day so: ");
scanf("%d", &n);
int a[1000];
printf("Nhap cac phan tu co trong day so: ");
for(int i = 0; i < n; i++){
    
    scanf("%d", &a[i]);

}
 printf("Cac so chan trong day la: ");
for(int i = 0; i < n;i++ ){
   
    if(a[i] % 2 == 0){
       
        printf("%d ", a[i]);
    }
}

    return 0;
}
