#include <stdio.h>
#include <string.h>
 int main(){
    char str1[20], str2[20];
    printf("nhập chuỗi 1: ");
    scanf("%s", str1);
    printf("nhập chuỗi 2: ");
    scanf("%s", str2);
    /*if (strcmp(str1, str2) == 0){
        printf("2 chuỗi bằng nhau.");

    } else if (strcmp(str1, str2) > 0){
        printf("chuỗi 1 lớn hơn chuỗi 2");
    
    } else{
        printf("chuỗi 1 nhỏ hơn chuỗi 2");
    }*/
    /*printf("xuat chuoi 1: %s\n", str1);
    printf("xuat chuoi 2: %s\n", str2);
    printf("chuoi dao nguoc 1: %s\n", strrev(str1));
    printf("chuoi dao nguoc 2: %s\n", strrev(str2));
 

    if(strstr(str1, str2) != NULL)
    printf("tìm thấy\n");*/
    
    char s[100];
    printf("xin mời nhập vào chuỗi:\n");
    gets(s);
    int i = 0;
    int n = 0; //bien de dem so nguyen am 
    int p = 0; //bien de dem so phu am
    //Khi gia tri cuoi cung cua mang != null
    while(s[i++] != '\0'){
    // nếu s[i] = 'a' hoặc 'i' hoặc 'e' hoặc 'u' hoặc 'o' thì n++
    // ngược lại: p++
    
    printf("chuoi'%s'\nco chua: \n%d nguyen am va %d phu am.",s, n, p);

    return 0;


 
}
}