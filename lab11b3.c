#include<stdio.h>
#include<string.h>


struct Diemhk1
{
    int stt;
    char monhoc[80];
    float diem;
    float diemtbmax;
};

typedef struct Diemhk1 hk1;

int main()
{   
    int n;
    printf("Nhap diem hk1, so luong mon hoc: ");
    scanf("%d",&n);
    hk1 a[n];
    
    for(int i =0;i<n;i++)
    {
    getchar();
        printf("nhap stt: "); scanf("%d",&a[i].stt);
        getchar();
        printf("Nhap ten mon hoc: ");
        gets(a[i].monhoc);
        printf("Diem mon hoc: ");
        scanf("%f",&a[i].diem);
        getchar();

    }
    float diemtbmax =a[0].diem;
    for(int i =0; i<n;i++)
    {
        if(a[i].diem > a[0].diem)
        {
            diemtbmax=a[i].diem;
        }else{
            diemtbmax;
        }
    }

    printf("Danh ach vua nhap: \n");
    printf("+-------+------------------------------------------+------+\n");
    printf("| %-5s | %-40s | %-4s |\n","stt","mon hoc","diem");
    printf("+-------+------------------------------------------+------+\n");
    for(int i=0; i<n;i++)
    {
    printf("| %-5d | %-40s | %.2f |\n",a[i].stt,a[i].monhoc,a[i].diem);
    }
    printf("+---------------------------------------------------------+\n");
    printf("|                                                    %.2f |\n",diemtbmax);
    printf("+---------------------------------------------------------+\n");

    return 0;
}