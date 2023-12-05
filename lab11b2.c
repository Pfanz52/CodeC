#include<stdio.h>
#include<string.h>
#include<ctype.h>


struct Product
{
    int stt;
    char name[100];
    int soluong;
    int gia;
    int tong;
    int thanhtoan ;
};

    typedef struct Product product;
int main()
{
    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d",&n);
    product a[n];

    for(int i =0;i<n;i++)
    {
    getchar();
        
        printf("Thong tin san pham: %d:\n",i+1); 
        a[i].stt=i+1;
        printf("Ten san pham : "); gets(a[i].name);
        printf("So luong     : "); scanf("%d",&a[i].soluong);
        
        printf("Don gia <$>  : "); scanf("%d",&a[i].gia);
        
        printf("Tong tien <$>: "); scanf("%d",&a[i].tong);;
        
        
        
    }
    int thanhtoan =0;
    for(int i =0;i<n;i++)
    {thanhtoan += a[i].tong;}
    printf("\nDanh sach san pham vua nhap: \n");
    printf("+-------+-----------------------------------------------------+----------------------+----------------------+----------------------+\n");
    
    printf("| %-5s | %-51s | %-20s | %-20s | %-20s |\n","STT","Ten san pham","So luong","Don gia","Tong tien" );
    printf("+-------+-----------------------------------------------------+----------------------+----------------------+----------------------+\n");
    
    for(int i=0;i<n;i++)
    {
       
        printf("| %-5d | %-51s | %20d | %20d | %20d |\n",a[i].stt,a[i].name,a[i].soluong,a[i].gia,a[i].tong);
       
    }
    printf("+----------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("| %128d |\n",thanhtoan);
    
    printf("+----------------------------------------------------------------------------------------------------------------------------------+\n");

    FILE *f;
    f=fopen("product.txt","w");
    if(f == NULL)
    {
        printf("khong the mo file.\n");
        return 1;
    }
    for(int i =0;i<n;i++)
    {
        fprintf(f,"ten san pham: %s\n",a[i].name);
        fprintf(f,"so luong: %d\n",a[i].soluong);
        fprintf(f,"don gia: %d\n",a[i].gia);
        fprintf(f,"tong tien: %d\n",a[i].tong);
        fprintf(f,"\n");
    }
    fclose(f);
    
    return 0;
}
