
#include <string.h>

int main(){
    char chuoi1[120], chuoi2[20];
    printf("Nhap vao chuoi 1: ");
    gets(chuoi1);
    //scanf("%20s",chuoi1);
    //getchar();// xoa /n
    printf("\nNhap vao chuoi 2: ");
    gets(chuoi2);
    /*if(strcmp(chuoi1,chuoi2)==0){
        printf(" Hai chuoi bang nhau");
    }else if(strcmp(chuoi1,chuoi2)>0){
        printf("Chuoi 1 lon nhau chuoi 2");
    }else {
        printf("Chuoi 1 nho hon chuoi 2");
    }*/
    printf("Xuat chuoi 1: %s", chuoi1);
    printf("\nXuat chuoi 2: %s", chuoi2);
    printf("\nChuoi dao nguoc: %s",strrev(chuoi1));
    return 0;
}