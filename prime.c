#include <stdio.h>

int main() {
    int guess = 5;
    int prime[1000];

    int index = 1;
    int i;
    int ok;
    prime[0] = 2;
    prime[1] = 3;
    for (;;) {
        ok = 0;
        for (i = 0; i <= index; i++) {
            if (guess % prime[1] != 0) {
                ok ++;
            }
            else {
                break;
            }
        }
        if (ok == (index +1)) {
            index++;
            prime[index] = guess;
            printf(" %d 번째 소수 : %d \n", i+1, prime[index]);
            if (index == 999) break;

        }
        guess += 2;

    }
    return 0;
}