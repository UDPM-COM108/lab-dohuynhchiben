#include <stdio.h>

int main() {
    int a[10];
    int min, max;

    // Nhập mảng
    for (int i = 0; i < 10; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Xuất mảng
    printf("Mang vua nhap: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    // Gán min và max bằng phần tử đầu tiên
    min = a[0];
    max = a[0];

    // Tìm min và max
    for (int i = 1; i < 10; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("\nGia tri nho nhat: %d", min);
    printf("\nGia tri lon nhat: %d", max);

    return 0;
}
