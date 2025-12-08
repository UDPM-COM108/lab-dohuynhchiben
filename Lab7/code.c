#include <stdio.h>

void timmax(int num1, int num2, int num3){
    int max;
    max = num1;
    if(max < num2)
    {
        max = num2;
    }
    if(max < num3)
    {
        max = num3;
    }
    printf("vậy max là:%d ",max);
}
    void timmin(int num1, int num2, int num3){
    int min;
    min = num1;
    if(min > num2)
    
    {
        min = num2;
    }
    if(min > num3)
    {
        min = num3;
    }
    printf("\nvậy min là: %d", min);
}
void tinhtong(int num1, int num2, int num3){
    int tong;
    tong = num1 + num2 + num3;
    printf("\nvậy tổng là: %d", tong);
}
void tinhhieu(int num1, int num2, int num3){
    int hieu;
    hieu = num1 - num2 - num3;
    printf("\nvậy hiệu là: %d", hieu);
}



int main(){
int so1,so2,so3;
printf("nhập vào số 1: ");
scanf("%d", &so1);
printf("nhập vào số 2: ");
scanf("%d", &so2);
printf("nhập vào số 3: ");
scanf("%d", &so3);
 
timmax(so1,so2,so3);
timmin(so1,so2,so3);
tinhtong(so1,so2,so3);
tinhhieu(so1,so2,so3);

return 0;
}