#include <stdio.h>

int timSoLonNhat(int arr[], int kichThuoc) {
    int max = arr[0]; 
    for (int i = 1; i < kichThuoc; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
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
    int soLonNhat = timSoLonNhat(mang, n);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);

    return 0;
}

