#include <stdio.h>

int main(){
    int a[10] = {8, 2, 6, 3, 9, 1, 7, 4, 5};
    int i, j, temp;
    for(i = 0; i < 9; i++) {
        for(j=i+1; j<10; j++) {
            if(a[i] > a[j]) {
        
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
  printf("\n");
  return 0;
  
}
