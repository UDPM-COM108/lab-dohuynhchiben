#include <stdio.h>
#include <math.h>


void kiemTraNguyenTo(int n){
    if(n < 2){
        printf("Số %d KHÔNG phải số nguyên tố.\n", n);
        return;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            printf("Số %d KHÔNG phải số nguyên tố.\n", n);
            return;
        }
    }
    printf("Số %d là số nguyên tố.\n", n);
}


void kiemTraChinhPhuong(int n){
    if(n < 0){
        printf("Số %d KHÔNG phải số chính phương.\n", n);
        return;
    }
    int k = sqrt(n);
    if(k * k == n)
        printf("Số %d là số chính phương.\n", n);
    else
        printf("Số %d KHÔNG phải số chính phương.\n", n);
}

// chức năng 1
void chucNang1(){
    int x;
    printf("Nhập số nguyên x: ");
    scanf("%d", &x);

    printf("\n kết quả chức năng 1 \n");
    printf("Số %d là số nguyên.\n", x);

    kiemTraNguyenTo(x);
    kiemTraChinhPhuong(x);
}


void timUCLN(int a, int b){
    int x = a, y = b;
    while(y != 0){
        int temp = x % y;
        x = y;
        y = temp;
    }
    printf("UCLN của %d và %d = %d\n", a, b, x);
}


void timBCNN(int a, int b){
    int x = a, y = b;
    while(y != 0){
        int temp = x % y;
        x = y;
        y = temp;
    }
    int ucln = x;
    int bcnn = (a * b) / ucln;
    printf("BCNN của %d và %d = %d\n", a, b, bcnn);
}

// chức năng 2
void chucNang2(){
    int x, y;
    printf("Nhập x: ");
    scanf("%d", &x);
    printf("Nhập y: ");
    scanf("%d", &y);

    printf("\n kết quả chức năng 2\n");
    timUCLN(x, y);
    timBCNN(x, y);
}



// chức năng 3
void chucNang3(){
    int start, end;
    printf("Nhập giờ bắt đầu: ");
    scanf("%d", &start);
    printf("Nhập giờ kết thúc: ");
    scanf("%d", &end);

    if(start < 12 || end > 23 || start >= end){
        printf("Giờ không hợp lệ! Quán chỉ mở từ 12h đến 23h.\n");
        return;
    }

    int gio = end - start;
    double tien = 0;

    if(gio <= 3){
        tien = gio * 150000;
    } 
    else {
        tien = 3 * 150000;
        tien += (gio - 3) * (150000 * 0.7);
    }

    if(start >= 14 && start <= 17){
        tien *= 0.9;
    }

    printf("Tổng tiền Karaoke: %.0f VND\n", tien);
}



// chức năng 4


void chucNang4(){
    int kwh;
    printf("Nhập số kWh điện đã sử dụng: ");
    scanf("%d", &kwh);

    if(kwh < 0){
        printf("Số kWh không hợp lệ!\n");
        return;
    }

    double tien = 0;

    if(kwh <= 50){
        tien = kwh * 1678;
    }
    else if(kwh <= 100){
        tien = 50 * 1678 + (kwh - 50) * 1734;
    }
else if(kwh <= 200){
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if(kwh <= 300){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if(kwh <= 400){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("Số tiền điện phải trả: %.0f VND\n", tien);
}

void chucNang5(){
    int tien;
    int a[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Nhập số tiền cần đổi: ");
    scanf("%d", &tien);

    if(tien <= 0){
        printf("Số tiền không hợp lệ!\n");
        return;
    }

    printf("\nKết quả đổi tiền:\n");

    for(int i = 0; i < 9; i++){
        if(tien >= a[i]){
            int soTo = tien / a[i];   
            tien %= a[i];            
            printf("%d tờ mệnh giá %d\n", soTo, a[i]);
        }
    }
}


int main(){
    int chon;

    do{
    printf("\n MENU");
    printf("\n1. Kiểm tra số nguyên / số nguyên tố / chính phương");
    printf("\n2. Tìm UCLN và BCNN của 2 số");
    printf("\n3. Tính tiền Karaoke");
    printf("\n4. Tính tiền điện");
    printf("\n5. Đổi tiền theo mệnh giá");
    printf("\n0. Thoát");
    printf("\nNhập lựa chọn: ");
    scanf("%d", &chon);

    switch(chon){
        case 1: chucNang1(); break;
        case 2: chucNang2(); break;
        case 3: chucNang3(); break;
        case 4: chucNang4(); break;
        case 5: chucNang5(); break;
        case 0: printf("Thoát chương trình.\n"); break;
        default: printf("Lựa chọn không hợp lệ!\n");
    }

} while(chon != 0);
return 0;
}