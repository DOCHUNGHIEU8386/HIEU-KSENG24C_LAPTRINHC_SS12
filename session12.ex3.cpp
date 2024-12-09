#include <stdio.h>

int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i; 
    }
    return giaiThua; 
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Khong tinh duoc giai thua cua so am.\n");
    } else {
        int ketQua = tinhGiaiThua(so);
        printf("Giai thua cua %d la: %d\n", so, ketQua);
    }

    return 0;
}

