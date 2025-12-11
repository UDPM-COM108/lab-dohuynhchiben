#include <stdio.h>


void UCLN_BCNN(int a, int b){
    int x=a, y=b;


    while( y!= 0){
        int temp = x % y;
        x = y;
        y = temp;

        int ucln = x;
        int bcnn = (a*b)/ucln;
        printf("UCLN của %d và %d = %d\n", a, b,x);
        
        printf("BCNN của %d và %d = %d\n", a, b, bcnn);

    }
   
    

}

int main(){
    int x,y;
    printf("Nhập x: ");
    scanf("%d", &x);
    printf("Nhập y: ");
    scanf("%d", &y);
    printf("vậy UCLN và BCNN là:\n");
    UCLN_BCNN(x,y);
    return 0;
}