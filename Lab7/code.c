#include <stdio.h>

int main(){ 
    int a[9]={500,200,100,50,20,10,5,2,1};
    int tien;

    printf("nhập vào tiền cần đổi: ");
    scanf("%d", &tien);

    if(tien <= 0){
        printf("số tiền không hợp lệ");
        return 0;
    }

    printf("số tiền vừa đổi:\n");

    for(int i = 0; i < 9; i++){
        int soto = 0;   // khai báo bên ngoài if để dùng sau

        if(tien >= a[i]){
            soto = tien / a[i];
            tien %= a[i];
        }

        // luôn in ra theo đúng yêu cầu tối qua
        printf("%d tờ mệnh giá %d\n", soto, a[i]);
    }

    return 0;
}
