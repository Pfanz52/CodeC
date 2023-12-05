#include <stdio.h>
#include <stdlib.h>

// Khai báo cấu trúc SinhVien
struct SinhVien {
    int maSV;
    char tenSV[50];
    char queQuan[50];
    char ghiChu[100];
};

int main() {
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Tạo một mảng chứa thông tin sinh viên
    struct SinhVien *svArr = (struct SinhVien *)malloc(n * sizeof(struct SinhVien));

    // Nhập thông tin cho từng sinh viên
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        svArr[i].maSV = i + 1;

        printf("Ten sinh vien: ");
        scanf("%s", svArr[i].tenSV);

        printf("Que quan: ");
        scanf("%s", svArr[i].queQuan);

        printf("Ghi chu: ");
        scanf("%s", svArr[i].ghiChu);
    }

    // Hiển thị thông tin sinh viên
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Ma SV: %d\n", svArr[i].maSV);
        printf("Ten SV: %s\n", svArr[i].tenSV);
        printf("Que quan: %s\n", svArr[i].queQuan);
        printf("Ghi chu: %s\n", svArr[i].ghiChu);
        printf("\n");
    }

    // Ghi thông tin sinh viên vào tệp tin
    FILE *file = fopen("sinhvien.txt", "w");
    if (file == NULL) {
        printf("Khong the mo tao file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Ma SV: %d\n", svArr[i].maSV);
        fprintf(file, "Ten SV: %s\n", svArr[i].tenSV);
        fprintf(file, "Que quan: %s\n", svArr[i].queQuan);
        fprintf(file, "Ghi chu: %s\n", svArr[i].ghiChu);
        fprintf(file, "\n");
    }

    fclose(file);
    free(svArr);

    return 0;
}
