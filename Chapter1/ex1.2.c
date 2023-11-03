#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * This program prints prime pairs.
*/

bool isPrime(int n);

int main() {
    printf("(1, 3)\n");
    for (int i = 1; i <= 200; i++) {
        if (isPrime(i) && isPrime(i+2)) {
            printf("(%d, %d)\n", i, i+2);
        }
    }
    return(EXIT_SUCCESS);
}

bool isPrime(int n) {
    if (n <=1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}