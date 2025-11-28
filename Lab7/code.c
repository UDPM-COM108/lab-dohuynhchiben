#include <stdio.h>

int main(){
    int luachon;
    do {
    printf("menu chương trình\n");
    printf("1.phép tính cộng\n");
    printf("2.phép tính trừ\n");
    printf("3.xếp hạng học lực\n");
    printf("4.thoát\n");
    printf("nhập yêu cầu của bạn: ");
    scanf("%d", &luachon);
    switch(luachon)

    switch(luachon) {
        
            case 1:{
            int a, b;
            int tong;
            printf("nhập vào số a: ");
            scanf("%d", &a);
            printf("nhập vào số b: ");
            scanf("%d", &b);
            tong = a + b;

            printf("Tổng của bạn là: %d\n", tong);
            break;
    }

        
            case 2:{
            int a, b;
            int hieu;
            printf("nhập vào số a: ");
            scanf("%d", &a);
            printf("nhập vào số b: ");
            scanf("%d", &b);
            hieu = a - b;

            printf("Hiệu của bạn là: %d\n", hieu);
            break;
    }
            case 3:
            int diem;
            printf("nhập điểm của bạn vào: ");
            scanf("%d", &diem);
            if (diem >= 9){
                printf("học lực xuất sắc\n");
            }
            else if (diem >= 8){
                printf("học lực giỏi\n");
            }
            else if (diem >= 6){
                printf("học lực khá\n");
            }
            else if (diem >= 5){
                printf("học lực trung bình\n");
            }
            else if (diem == 3){
                printf("học lực yếu\n ");
             }
             break;
             case 0: {
                printf("thoát chương trình\n");
                }
                default:
            printf("Lua chon khong hop le! Moi nhap lai.\n");
        }

    } while (luachon != 0);

    return 0;
}
             




            



