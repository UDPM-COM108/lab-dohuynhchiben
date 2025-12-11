#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Bài 1: Tính học lực
void tinhHocLuc() {
    float dtb;
    printf("Nhap diem trung binh (0-10): ");
    scanf("%f", &dtb);

    if (dtb >= 9)
        printf("Hoc luc: Xuat Sac\n");
    else if (dtb >= 8)
        printf("Hoc luc: Gioi\n");
    else if (dtb >= 6.5)
        printf("Hoc luc: Kha\n");
    else if (dtb >= 5)
        printf("Hoc luc: Trung Binh\n");
    else
        printf("Hoc luc: Yeu\n");
}

//Bài 2: Giải phương trình bậc nhất 
void giaiPTBacNhat() {
    float a, b;
    printf("Nhap he so a, b: ");
    scanf("%f%f", &a, &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh: x = %.2f\n", x);
    }
}

//Bài 3: Giải phương trình bậc hai
void giaiPTBacHai() {
    float a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            float x = -c / b;
            printf("Nghiem cua phuong trinh: x = %.2f\n", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

//Bài 4: Tính tiền điện 
void bai4() {
    int kwh;
    double tien = 0;

    printf("Nhap so kWh dien su dung: ");
    scanf("%d", &kwh);

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1806 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1806 + 50 * 1866 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + (kwh - 300) * 2834;
    else
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + 100 * 3050 + (kwh - 400) * 2927;

    printf("Tien dien phai tra: %.0lf VND\n", tien);
}

//Menu chương trình
int main() {
    int luachon;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Chuong trinh tinh tien dien\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
        case 1: {
            float diem;
            printf("Nhap diem: ");
            scanf("%f", &diem);

            if (diem >= 9) {
                printf("Xep loai Xuat sac\n");
            } else if (diem >= 8 && diem < 9) {
                printf("Xep loai Gioi\n");
            } else if (diem >= 6.5 && diem < 8) {
                printf("Xep loai Kha\n");
            } else if (diem >= 5 && diem < 6.5) {
                printf("Xep loai Trung binh\n");
            } else if (diem >= 3 && diem < 5) {
                printf("Xep loai Kem\n");
            } else {
                printf("Xep loai Yeu\n");
            }

            break;
        }
        case 2: {
            float a, b;
            printf("Nhap a, b: ");
            scanf("%f %f", &a, &b);

            if (a == 0) {
                if (b == 0) printf("Vo so nghiem\n");
                else printf("Vo nghiem\n");
            } else {
                printf("Nghiem: x = %.2f\n", -b / a);
            }
            break;
        }
        case 3: {
            float a, b, c;
            printf("Nhap a, b, c: ");
            scanf("%f %f %f", &a, &b, &c);

            if (a == 0) {
                printf("Khong phai PT bac 2\n");
            } else {
                float delta = b*b - 4*a*c;

                if (delta < 0) printf("Vo nghiem\n");
                else if (delta == 0) printf("Nghiem kep: x = %.2f\n", -b/(2*a));
                else {
                    printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2*a));
                    printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2*a));
                }
            }
            break;
        }
        case 4: {
            int kWh;
            double tien = 0; 
            printf("Nhap so kWh: ");
            scanf("%d", &kWh);

            if (kWh <= 50)
                tien = kWh * 1678;
            else if (kWh <= 100)
                tien = 50*1678 + (kWh-50)*1734;
            else if (kWh <= 200)
                tien = 50*1678 + 50*1734 + (kWh-100)*2014;
            else if (kWh <= 300)
                tien = 50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
            else if (kWh <= 400)
                tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kWh-300)*2834;
            else
                tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;

            printf("Tien dien: %.0lf dong\n", tien);  
            break;
        }
        case 0:
            printf("Thoat chuong trinh...\n");
            break;

            default:
            printf("Lua chon khong hop le! Moi nhap lai.\n");
        }

    } while (luachon != 0);

    return 0;
}

        



