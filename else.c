#include <stdio.h>

int main() {
    int x;
    printf("input number : ");
    scanf("%d", &x);
    if (x == 7) {
        printf("lucky number 7\n");
    } else if (x == 4){
        printf("oh its death's number %d \n", x);
    }
    else {
        printf("its a normal number %d \n", x);
    }
    return 0;
}