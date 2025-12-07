#include <stdio.h>
#include <math.h>

// ================= CHUC NANG 1 ====================
void chucNang1(){
    int x;
    printf("Nhap 1 so nguyen x: ");
    scanf("%d", &x);

    // 1. Kiem tra so nguyen: (luon la so nguyen vi dung int)
    printf("- %d la so nguyen\n", x);

    // 2. Kiem tra so nguyen to
    int dem = 0;
    for(int i = 1; i <= x; i++){
        if(x % i == 0) dem++;
    }
    if(dem == 2)
        printf("- %d la so nguyen to\n", x);
    else
        printf("- %d khong phai so nguyen to\n", x);

    // 3. Kiem tra so chinh phuong
    int k = sqrt(x);
    if(k * k == x)
        printf("- %d la so chinh phuong\n", x);
    else
        printf("- %d khong phai so chinh phuong\n", x);
}


// ================ CHUC NANG 2 =======================
int UCLN(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void chucNang2(){
    int x, y;
    printf("Nhap 2 so nguyen (x y): ");
    scanf("%d %d", &x, &y);

    int ucln = UCLN(x, y);
    int bcnn = (x * y) / ucln;

    printf("- Uoc chung lon nhat: %d\n", ucln);
    printf("- Boi chung nho nhat: %d\n", bcnn);
}


// =============== CHUC NANG 3 =======================
void chucNang3(){
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if(start < 12 || end > 23 || start >= end){
        printf("Gio khong hop le!\n");
        return;
    }

    int gio = end - start;
    int gia = 0;

    if(gio <= 3){
        gia = gio * 150000;
    } else {
        gia = 3 * 150000 + (gio - 3) * (150000 * 0.7); // giam 30%
    }

    if(start >= 14 && start <= 17){
        gia = gia * 0.9; // giam 10%
    }

    printf("Tien karaoke: %d VND\n", gia);
}


// =============== CHUC NANG 4 =======================
void chucNang4(){
    int kwh;
    printf("Nhap so kwh: ");
    scanf("%d", &kwh);

    int tien = 0;
    if(kwh <= 50) tien = kwh * 1678;
    else if(kwh <= 100) tien = 50*1678 + (kwh-50)*1734;
    else if(kwh <= 200) tien = 50*1678 + 50*1734 + (kwh-100)*2014;
    else if(kwh <= 300) tien = 50*1678 + 50*1734 + 100*2014 + (kwh-200)*2536;
    else if(kwh <= 400) tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh-300)*2834;
    else tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh-400)*2927;

    printf("Tien dien: %d VND\n", tien);
}


// =============== CHUC NANG 5 =======================
void chucNang5(){
    int money;
    int menhgia[] = {500,200,100,50,20,10,5,2,1};
    printf("Nhap so tien: ");
    scanf("%d", &money);

    for(int i=0; i<9; i++){
        int soTo = money / menhgia[i];
        if(soTo > 0)
            printf("%d to %d\n", soTo, menhgia[i]);
        money = money % menhgia[i];
    }
}


// =============== CHUC NANG 6 =======================
void chucNang6(){
    float vay;
    printf("Nhap so tien muon vay: ");
    scanf("%f", &vay);

    float tong = 0;
    for(int i=0; i<12; i++){
        vay = vay + vay*0.05; // lai 5%
    }

    printf("Tien phai tra sau 12 thang: %.0f VND\n", vay);
}


// =============== CHUC NANG 7 =======================
void chucNang7(){
    float phantram;
    printf("Nhap phan tram vay: ");
    scanf("%f", &phantram);

    float tongTien = 500000000;
    float traTruoc = tongTien * (100 - phantram) / 100;
    float vay = tongTien * phantram / 100;

    float laiNam = 0.072;
    float tienHangThang = vay * (1 + laiNam*24) / (24*12);

    printf("Tien tra lan dau: %.0f\n", traTruoc);
    printf("Tien phai tra hang thang: %.0f\n", tienHangThang);
}


// =============== CHUC NANG 8 =======================
void chucNang8(){
    char ten[50];
    float diem;

    printf("Nhap ten sinh vien: ");
    fflush(stdin);
    fgets(ten, 50, stdin);

    printf("Nhap diem: ");
    scanf("%f", &diem);

    printf("Ten: %s", ten);
    printf("Diem: %.1f\n", diem);

    if(diem >= 9) printf("Hoc luc: Xuat sac\n");
    else if(diem >= 8) printf("Hoc luc: Gioi\n");
    else if(diem >= 6.5) printf("Hoc luc: Kha\n");
    else if(diem >= 5) printf("Hoc luc: Trung binh\n");
    else printf("Hoc luc: Yeu\n");
}


// =============== CHUC NANG 9 =======================
#include <stdlib.h>
#include <time.h>

void chucNang9(){
    srand(time(NULL));

    int a, b;
    printf("Nhap 2 so tu 1–15: ");
    scanf("%d %d", &a, &b);

    int r1 = rand() % 15 + 1;
    int r2 = rand() % 15 + 1;

    int trung = 0;
    if(a == r1 || a == r2) trung++;
    if(b == r1 || b == r2) trung++;

    printf("So may man: %d %d\n", r1, r2);

    if(trung == 0) printf("Chuc ban may man lan sau\n");
    else if(trung == 1) printf("Trung giai nhi!\n");
    else printf("Trung giai nhat!!!\n");
}


// =============== CHUC NANG 10 =======================
void chucNang10(){
    int tu1, mau1, tu2, mau2;

    printf("Nhap phan so 1 (tu mau): ");
    scanf("%d %d", &tu1, &mau1);

    printf("Nhap phan so 2 (tu mau): ");
    scanf("%d %d", &tu2, &mau2);

    printf("Tong: %d/%d\n", tu1*mau2 + tu2*mau1, mau1*mau2);
    printf("Hieu: %d/%d\n", tu1*mau2 - tu2*mau1, mau1*mau2);
    printf("Tich: %d/%d\n", tu1*tu2, mau1*mau2);
    printf("Thuong: %d/%d\n", tu1*mau2, tu2*mau1);
}


// ==================== MAIN MENU ======================
int main(){
    int chon;

    do{
        printf("\n====== MENU ======\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. UCLN & BCNN\n");
        printf("3. Tien karaoke\n");
        printf("4. Tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh tien vay 12 thang\n");
        printf("7. Vay mua xe\n");
        printf("8. Thong tin sinh vien\n");
        printf("9. FPOLY LOTT\n");
        printf("10. Tinh phan so\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &chon);

        switch(chon){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 7: chucNang7(); break;
            case 8: chucNang8(); break;
            case 9: chucNang9(); break;
            case 10: chucNang10(); break;
            case 0: printf("Thoat chuong trinh\n"); break;
            default: printf("Nhap sai!\n");
        }
    } while(chon != 0);

    return 0;
}
