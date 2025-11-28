#include <stdio.h>

//BAI 1: Hàm min max
int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int timMin(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

//BAI 2: Kiểm tra năm nhuận
int namNhuan(int year) {
    if (year % 400 == 0) return 1;
    if (year % 4 == 0 && year % 100 != 0) return 1;
    return 0;
}

//BAI 3: Chia hết cho 5 và 9
void kiemTraChiaHet(int x) {
    if (x < 1 || x > 1000) {
        printf("So khong nam trong khoang 1-1000!\n");
        return;
    }

    if (x % 5 == 0 && x % 9 == 0)
        printf("%d chia het cho 5 va 9\n", x);
    else
        printf("%d KHONG chia het cho 5 va 9\n", x);
}

int main() {
    int choice;

    do {
        printf("\n MENU Chương Trình  \n");
        printf("1. Tìm min, max trong 3 số\n");
        printf("2. Kiểm tra năm nhuận\n");
        printf("3. Kiểm tra số chia hết cho 5 và 9 (1-1000)\n");
        printf("4. Thoát\n");
        printf("Nhập lựa chọn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int a, b, c;
                printf("Nhap 3 so: ");
                scanf("%d %d %d", &a, &b, &c);
                printf("Max = %d\n", timMax(a, b, c));
                printf("Min = %d\n", timMin(a, b, c));
                break;
            }

            case 2: {
                int year;
                printf("Nhap nam: ");
                scanf("%d", &year);

                if (namNhuan(year))
                    printf("%d la nam nhuan\n", year);
                else
                    printf("%d khong phai nam nhuan\n", year);

                break;
            }

            case 3: {
                int x;
                printf("Nhap so (1-1000): ");
                scanf("%d", &x);
                kiemTraChiaHet(x);
                break;
            }

            case 4:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice = 0);

    return 0;
}
