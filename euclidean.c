#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0){
        return b;
    } else {
        return gcd(b%a, a);
    }
}

int main() {
    int a = 25, b = 15;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    a = 49, b = 16;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}