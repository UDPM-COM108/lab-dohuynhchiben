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

int main(){
    int chon;

    do{
        printf("\n===== MENU =====");
        printf("\n1. Kiểm tra số");
        printf("\n2. Tìm UCLN và BCNN");
        printf("\n0. Thoát");
        printf("\nNhập lựa chọn: ");
        scanf("%d", &chon);

        switch(chon){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 0: printf("Thoát.\n"); break;
            default: printf("Không hợp lệ!\n");
        }

    } while(chon != 0);

    return 0;
}
