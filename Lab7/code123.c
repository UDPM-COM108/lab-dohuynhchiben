#include <stdio.h>

int main(){
    int luachon;
    do {
    printf("1.tính tổng\n");
    printf("2.tính hiệu\n");
    printf("3.tính học lực\n");
    printf("0.thoát chương trình\n");
    printf("mời bạn chọn\n");
    scanf("%d", &luachon);
    switch (luachon) {
        case 1:{
        int a, b;
        int tong;
        printf("nhập vào số a: ");
        scanf("%d", &a);
        printf("nhập vào số b: ");
        scanf("%d", &b);

        tong = a + b;
        printf("tổng của bạn là: %d\n", tong);
        break;
    }
        case 2: {
            int a, b;
        int hieu;
        printf("nhập vào số a: ");
        scanf("%d", &a);
        printf("nhập vào số b: ");
        scanf("%d", &b);

        hieu = a - b;
        printf("hiệu của bạn là: %d\n", hieu);
        break;
    }
        case 3:{
            int diem;
            printf("nhập điểm của bạn: ");
            scanf("%d", &diem);
            if (diem > 9) 
                printf("xuất sắc\n");
            else if (diem >= 8 )
            printf("giỏi\n");
            else if (diem >= 6)
            printf("khá\n");
            else if (diem >= 5)
            printf("trung bình\n");
            else if (diem == 3)
            printf("yếu\n");
            break;
    }
        case 0:
        printf("thoát chương trình\n");
        break;

        default:
            printf("Lua chon khong hop le! Moi nhap lai.\n");
    }
   
} while (luachon != 0);
    return 0;
}
    