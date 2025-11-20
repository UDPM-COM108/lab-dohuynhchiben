#include <stdio.h>

int main() {

    int luachon;

    do {
        printf("\n CHƯƠNG TRÌNH TỔNG HỢP 4 BÀI \n");
        printf("1. TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2\n");
        printf("2. XÁC ĐỊNH SỐ NGUYÊN TỐ\n");
        printf("3. XÁC ĐỊNH SỐ CHÍNH PHƯƠNG\n");
        printf("4. Thoát Chương Trình\n");
        printf("Nhập lựa chọn: ");
        scanf("%d", &luachon);

        if (luachon == 1) {
            //BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
            int min, max;
            printf("Nhap min: ");
            scanf("%d", &min);
            printf("Nhap max: ");
            scanf("%d", &max);

            int i = min;
            float tong = 0, bienDem = 0, trungBinh = 0;

            while (i <= max) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
                i++;
            }

            if (bienDem == 0) {
                printf("Khong co so nao chia het cho 2 trong khoang.\n");
            } else {
                trungBinh = tong / bienDem;
                printf("Trung binh = %.2f\n", trungBinh);
            }

        } else if (luachon == 2) {
            //BÀI 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
            int x, count = 0, i;
            printf("Nhap x: ");
            scanf("%d", &x);

            if (x < 2) {
                printf("%d khong phai so nguyen to\n", x);
            } else {
                for (i = 2; i < x; i++) {
                    if (x % i == 0) {
                        count++;
                    }
                }

                if (count == 0)
                    printf("%d la so nguyen to\n", x);
                else
                    printf("%d khong phai so nguyen to\n", x);
            }

        } else if (luachon == 3) {
            // BÀI 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
            int x, i, count = 0;
            printf("Nhap x: ");
            scanf("%d", &x);

            for (i = 1; i < x; i++) {
                if (i * i == x) {
                    count = 1;
                    break;
                }
            }

            if (count == 1)
                printf("%d la so chinh phuong\n", x);
            else
                printf("%d khong phai so chinh phuong\n", x);

        } else if (luachon == 4) {
            printf("Thoat chuong trinh...\n");
        } else {
            printf("Lua chon khong hop le! Vui long nhap 1 - 4.\n");
        }

    } while (luachon != 4);

    return 0;
}
