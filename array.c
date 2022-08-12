#include <stdio.h>

int a[10] = {1,2,3,4,5,6,7,8,9,10};

int main() {
    int i ;
    for (i=0;i<10;i++){
    printf("array's %d number : %d \n", i + 1, a[i]);
    }
    return 0;
}