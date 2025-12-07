#include <stdio.h>

int main() {
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    // 1. x là số nguyên
    printf("%d la so nguyen.\n", x);

    // 2. Kiem tra so nguyen to (đổi tên biến)
    int laNguyenTo = 1;   // mặc định đúng

    if (x < 2) {
        laNguyenTo = 0;
    } else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                laNguyenTo = 0;
                break;
            }
        }
    }

    if (laNguyenTo == 1)
        printf("%d la so nguyen to.\n", x);
    else
        printf("%d KHONG la so nguyen to.\n", x);

    // 3. Kiem tra so chinh phuong
    int laChinhPhuong = 0;
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) {
            laChinhPhuong = 1;
            break;
        }
    }

    if (laChinhPhuong == 1)
        printf("%d la so chinh phuong.\n", x);
    else
        printf("%d KHONG la so chinh phuong.\n", x);

    return 0;
}

