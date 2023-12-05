#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sinhvien
{
    int stt;
    int MSV;
    char name[40];
    char from[40];
    char note[20];
};
typedef struct sinhvien sv;

int main()
{
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d",&n);
    sv a[n];
    for(int i =0; i<n;i++)
    {
    getchar();
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        a[i].stt = i + 1;
        
        printf("Nhap ma sinh vien : ");scanf("%d",&a[i].MSV);
        getchar();
        printf("Nhap ten sinh vien: ");gets(a[i].name);
        printf("Que quan sinh vien: ");gets(a[i].from);
        printf("Ghi chu sinh vien : ");gets(a[i].note);

    }
    printf("Hien thi ra man hinh: \n");
    printf("+------+----------------------+----------------------------------------+----------------------------------------+----------------------+\n");
    printf("| %-4s | %-20s | %-38s | %-38s | %-20s |\n","STT","Ma Sinh Vien","Ten sinh vien","Que quan","Ghi chu");
    printf("+------+----------------------+----------------------------------------+----------------------------------------+----------------------+\n");
    for(int i=0;i<n;i++)
    {
+printf("| %-4d | %-20d | %-38s | %-38s | %-20s |\n",a[i].stt,a[i].MSV,a[i].name,a[i].from,a[i].note);   
    }
    printf("+------+----------------------+----------------------------------------+----------------------------------------+----------------------+\n");
    printf("\n");
FILE *f;
int result =0;
f= fopen("sv.txt", "w");
if(f==NULL)
{
    printf("khong the mo file.\n");
    return 1;
}
for(int i =0; i<n;i++)

{
    fprintf(f,"Ma SV: %d\n",a[i].MSV);
    fprintf(f,"Ten SV: %s\n",a[i].name);
    fprintf(f,"Que quan: %s\n",a[i].from);
    fprintf(f,"Ghi chi: %s\n",a[i].note);
    fprintf(f,"\n");
}

fclose(f);
free(a);
    return 0;
}