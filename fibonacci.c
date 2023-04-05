#include <stdio.h>

int fibonacci(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main() {
    int n, m=0, i;
    printf("\nWELCOME TO FIBONACCI\n");
    printf("\nPlease enter a positive number: ");
    scanf("%d\n", &n);

    for (i = 1; i <= n; i++){
        printf("%d, ", fibonacci(m));
        m++;
    }
    return 0;
}