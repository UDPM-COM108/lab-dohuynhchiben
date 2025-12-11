#include <stdio.h>
#include <math.h>
void nguyento(int n){
    if(n < 2){
        printf("khong phai so nguyen to", n);
        return;
    }
    for(int  i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            printf("khong phai so nguyen to", n);
            return;
        }
        
    }
    printf("la so nguyen to ", n);
}
void chinhphuong(int n){
    if(n < 0){
        printf("khong phai so chinh phuong", n);
        return;
    }\
    int k = sqrt(n);
    if(k * k == n)
     printf("Số %d là số chính phương.\n", n);
    else
        printf("Số %d KHÔNG phải số chính phương.\n", n);
}

int main(){
    int x;
    printf("nhập vào số nguyên x: ");
    scanf("%d", &x);
    nguyento(x);
    chinhphuong(x);
    return 0;
}