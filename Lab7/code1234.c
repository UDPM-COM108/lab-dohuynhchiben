#include <stdio.h>
int main(){
    int luachon;
    do {
        printf("1.tính chu vi\n");
        printf("2.tính diện tích\n");
        printf("3.thoát chương trình\n");
        printf("mời bạn nhập lựa chọn: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1: {
                
                int chieudai, chieurong, chuvi;

                printf("Nhap chieu dai: ");
                scanf("%d", &chieudai);
                printf("Nhap chieu rong: ");
                scanf("%d", &chieurong);

                chuvi = (chieudai + chieurong) * 2;
                printf("Chu vi la: %d\n\n", chuvi);
                break;
            }

            case 2: {
                int chieudai, chieurong, dientich;

                printf("Nhap chieu dai: ");
                scanf("%d", &chieudai);
                printf("Nhap chieu rong: ");
                scanf("%d", &chieurong);

                dientich = chieudai * chieurong;
                printf("Dien tich la: %d\n\n", dientich);
                break;
            }
            case 3: 
            printf("thoát chương trình\n");
            default:
            printf("lựa chọn không hợp vui lòng chọn lại\n");

        }
    } while (luachon != 0);
    return 0;
}