#include <stdio.h>
// kieu cau truc
struct SINHVIEN{
    int MASV;
    char HOTEN[50];
    float diem;
    char HocLuc[10];
};


int main(){
    struct SINHVIEN SV1;
    printf("Nhap MASV: ");
    scanf("%d", &SV1.MASV);
    printf("Nhap hoten: ");
    scanf("%s", SV1.HOTEN);
    printf("Nhap diem: ");
    scanf("%f",&SV1.diem);

    // xuat ra thong tin 
    printf("MaSV: %d - Hoten: %s - Diem: %.2f", 
            SV1.MASV,SV1.HOTEN,SV1.diem);
    return 0;
}