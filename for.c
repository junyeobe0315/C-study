#include <stdio.h>

int main() {
    int i=1, sum=0;
    for (i = 1; i<=100; i++) {
        sum += i;
    }
    printf("sum of 1 to %d is %d \n", i-1, sum);
    return 0;
}