#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int soThuNhat, soThuHai, tong;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &soThuNhat);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &soThuHai);
    tong = tinhTong(soThuNhat, soThuHai);
    printf("Tong cua %d va %d la: %d\n", soThuNhat, soThuHai, tong);

    return 0;
}

