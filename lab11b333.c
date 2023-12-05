#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa cấu trúc học sinh
struct Student {
    char ten[50];
    float diem;
};

// Khai báo một mảng để lưu danh sách học sinh
struct Student danhSachHocSinh[100];
int soLuongHocSinh = 0;

// Hàm để nhập điểm
void nhapDiem() {
    if (soLuongHocSinh < 100) {
        struct Student hocSinhMoi;
        printf("Nhap ten hs : ");
        scanf("%s", hocSinhMoi.ten);
        printf("nhap diem hs: ");
        scanf("%f", &hocSinhMoi.diem);
        danhSachHocSinh[soLuongHocSinh] = hocSinhMoi;
        soLuongHocSinh++;
        printf("SUCCESS.\n");
    } else {
        printf("FULL.\n");
    }
}

// Hàm để hiển thị danh sách dưới dạng bảng
void hienThiDanhSach() {
    if (soLuongHocSinh == 0) {
        printf("TRONG.\n");
    } else {
        printf("Danh sach diem:\n");
        printf("+-------+----------------------+------------+\n");
        printf("| %-5s | %-20s | %-10s |\n", "STT", "Ten Hoc Sinh", "Diem");
        printf("+-------+----------------------+------------+\n");
        for (int i = 0; i < soLuongHocSinh; i++) {
            printf("| %-5d | %-20s | %-10.2f |\n", i + 1, danhSachHocSinh[i].ten, danhSachHocSinh[i].diem);
        }
        printf("+-------+----------------------+------------+\n");
    }
}

// Hàm để tìm điểm trung bình cao nhất
void diemTBCaoNhat() {
    if (soLuongHocSinh == 0) {
        printf("Trong.\n");
    } else {
        float maxDiem = danhSachHocSinh[0].diem;
        char tenMaxDiem[50];
        for (int i = 1; i < soLuongHocSinh; i++) {
            if (danhSachHocSinh[i].diem > maxDiem) {
                maxDiem = danhSachHocSinh[i].diem;
                strcpy(tenMaxDiem, danhSachHocSinh[i].ten);
            }
        }
        printf("+-------+----------------------+------------+\n");
        printf("Ten hoc sinh co diem tb cao nhat: %s\n", tenMaxDiem);
        printf("+-------+----------------------+------------+\n");
        printf("Diem tb cao nhat: %.2f\n", maxDiem);
        printf("+-------+----------------------+------------+\n");
    }
}

int main() {
    while (1) {
        printf("\nMenu:\n");
        printf("1. Nhap diem\n");
        printf("2.Hien thi danh sach\n");
        printf("3. Diem tb cao nhat\n");
        printf("4. Exit\n");

        int luaChon;
        printf("Chon chuc nang (1/2/3/4): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapDiem();
                break;
            case 2:
                hienThiDanhSach();
                break;
            case 3:
                diemTBCaoNhat();
                break;
            case 4:
                printf("Chuong trinh ket thuc.\n");
                exit(0);
            default:
                printf("Chuc nang khong hop le.Chon lai chuc nang.\n");
        }
    }

    return 0;
}
