#include <stdio.h>

int checknam(int nam)
{
int namnhuan = 0;
if((nam % 400 == 0 || nam % 4 == 0) && (nam % 100 != 0)) 
{
namnhuan = 1;
}
return namnhuan;
}


int main(){
int year;
printf("nhập năm: "); 
scanf("%d", &year);

if (checknam(year) == 1)
{
   printf("đây là năm nhuận ", year);
}
else 
{
   printf("đây không phải là năm nhuận ", year);
}
return 0;
}