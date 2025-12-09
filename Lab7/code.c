#include <stdio.h>

void chucNang1(){

}

void chucNang2(){

}
void chucNang3(){
    
}
int main(){
    int luachon;
    do {
        printf("1.Xét số nguyên\n");
        printf("2.Tìm max\n");
        printf("3.Tính tổnn\n");
        printf("0.thoát...\n");
        printf("nhập lựa chọn: ");
        scanf("%d", &luachon);


        switch(luachon){
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 0: printf("thoát chương trình..."); break;
            default: printf("lựa chọn không hợp lệ ");

}

        }
        while(luachon != 0);
        return 0;
    }
