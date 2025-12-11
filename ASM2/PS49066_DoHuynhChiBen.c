#include <stdio.h>
int main(){
    int kwh;
    printf("nhập vào số điện đã sử dụng: ");
    scanf("%d", &kwh);
    if(kwh <= 0){
        printf("số tiền không đúng ");
        return 0;
    }
    double tien = 0;
    if(kwh<= 50){
        tien = kwh * 1678;
    }
    else if (kwh <= 100){
        tien = 50 * 1678 + ( kwh - 50) * 1734;
    }
    else if (kwh <= 200){
        tien = 50 * 1678 + 50 * 1734 + ( kwh - 100) * 2014;
    }
    else if (kwh <= 300){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400){
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 * 200 + 2536 + (kwh - 300) * 2834;
    }
    else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 * 200 + 2536 + 300 * 2834 + (kwh - 400) * 2927;
    }
    printf("số tiền cần phải trả là: %.0f VnD", tien);
    return 0;
}