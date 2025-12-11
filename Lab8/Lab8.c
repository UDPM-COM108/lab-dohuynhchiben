#include <stdio.h>
#include <math.h>
struct SV{
    int MSSV;
    char hoten[40];
    float diem;
};
int main(){

    struct SV SV1;
    printf("Nhap ma sv: ");
    scanf("%d", &SV1.MSSV);
    printf("Nhap hoten: ");
    scanf("%s",&SV1.hoten);
    printf("Nhap diem :");
    scanf("%f",&SV1.diem);

    printf("MaSV: %d \nhoten: %s \ndiem:%.2f",SV1.MSSV,SV1.hoten,SV1.diem);
      printf("\nXep loai: ");
    if(SV1.diem >= 8.0)
        printf("Gioi\n");
    else if(SV1.diem >= 6.5)
        printf("Kha\n");
    else if(SV1.diem >= 5.0)
        printf("Trung binh\n");
    else
        printf("Yeu\n");



return 0;
}