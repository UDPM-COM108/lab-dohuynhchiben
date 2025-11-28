#include <stdio.h>
#include <math.h>
int main() {
    int a = 5, b = 10, c = 15;
    int max, min;
    int x = -5;
//giá trị lớn nhất
    max = a;
    if (b > max) 
        max = b;

    if (c > max) 
        max = c;
//giá trị nhỏ nhất
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
//tính giá trị tuyệt đối
    int absValue = abs(x);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("abs(%d) = %d\n", x, absValue);

    return 0;
}