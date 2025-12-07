#include <stdio.h>
int main(){
    int a[10];
    int i;
    int tong = 0;
    for(int i = 0; i < 10; i++){
        printf("nhap mang a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("xuat mang a: ");
    for(int i = 0; i < 10; i++){
      printf("%d ", a[i]);
    }
    for(int i = 0; i < 10; i++){
        tong = tong + a[i];
    }
    printf("\ntong mang la: %d", tong);
    return 0;
}

