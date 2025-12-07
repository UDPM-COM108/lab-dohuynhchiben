#include <stdio.h>
#include <conio.h>

void max(int num1, int num2, int num3)
{
    int a;
    a = num1;
    if (a < num2)
    {
        a = num2;
    }
    if (a < num3) 
    {
        a = num3;
    }
    printf("vậy max là %d\n", a);
}
 void min(int num1, int num2, int num3)
{
    int b;
    b = num1;
    if (b > num2)
    {
        b = num2;
    }
    if (b > num3) 
    {
        b = num3;
    }
    printf("vậy min là %d\n", b);
}


int main(){
    int so1, so2, so3;
    printf("nhập vào số 1: ");
    scanf("%d", &so1);
     printf("nhập vào số 2: ");
     scanf("%d", &so2);
      printf("nhập vào số 3: ");
      scanf("%d", &so3);

      max(so1,so2,so3);
      min(so1,so2,so3);


       return 0;

    

}