#include <stdio.h>

int inMang(int arr[], int kichThuoc) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return kichThuoc;
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1; 
    }
    int mang[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    int soLuong = inMang(mang, n);
    printf("So luong phan tu da in: %d\n", soLuong);
    return 0;
}

