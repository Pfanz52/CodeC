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
        printf("nhap ten hs: ");
        scanf("%s", hocSinhMoi.ten);
        printf("nhap diem hs: ");
        scanf("%f", &hocSinhMoi.diem);
        danhSachHocSinh[soLuongHocSinh] = hocSinhMoi;
        soLuongHocSinh++;
        printf("da them thanh cong.\n");
    } else {
        printf("danh sach da day.\n");
    }
}

// Hàm để hiển thị danh sách
void hienThiDanhSach() {
    if (soLuongHocSinh == 0) {
        printf("DAnh sach diem trong.\n");
    } else {
        printf("danh sach diem:\n");
        for (int i = 0; i < soLuongHocSinh; i++) {
            printf("%d. ten: %s, diem: %.2f\n", i + 1, danhSachHocSinh[i].ten, danhSachHocSinh[i].diem);
        }
    }
}

// Hàm để tìm điểm trung bình cao nhất
void diemTBCaoNhat() {
    if (soLuongHocSinh == 0) {
        printf("danh sach diem trong.\n");
    } else {
        float maxDiem = danhSachHocSinh[0].diem;
        char tenMaxDiem[50];
        for (int i = 1; i < soLuongHocSinh; i++) {
            if (danhSachHocSinh[i].diem > maxDiem) {
                maxDiem = danhSachHocSinh[i].diem;
                strcpy(tenMaxDiem, danhSachHocSinh[i].ten);
            }
        }
        printf("ten hs co diem tb cao  nhat: %s\n", tenMaxDiem);
        printf("diem tb cao nhat: %.2f\n", maxDiem);
    }
}

int main() {
    while (1) {
        printf("\nMenu:\n");
        printf("1.nhao diem\n");
        printf("2. hien thi danh sach\n");
        printf("3. diem tb cao nhat\n");
        printf("4. thoat\n");

        int luaChon;
        printf("chon chuc nang (1/2/3/4): ");
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
                printf("the end.\n");
                exit(0);
            default:
                printf("nhap lai 1-4.\n");
        }
    }

    return 0;
}
