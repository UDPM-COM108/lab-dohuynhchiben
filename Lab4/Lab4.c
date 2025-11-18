#include <stdio.h>
//Bài 1: Tính Trung Bình Tổng Của Các Số Tự Nhiên Chia Hết Cho 2
int main() {
    int min, max;
    printf("Nhập min: ");
    scanf("%d", &min);
    printf("Nhập max: ");
    scanf("%d", &max);

    float tong = 0;
    int bienDem = 0;

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
    }

    if (bienDem > 0) {
        float trungBinh = tong / bienDem;
        printf("Trung bình cộng các số chia hết cho 2 là: %.2f\n", trungBinh);
    } else {
        printf("Không có số nào chia hết cho 2 trong khoảng này.\n");
    }

    return 0;
}
//Bài 2: