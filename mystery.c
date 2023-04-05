#include <stdio.h>

int mystery(int n) {
    int ans;
    if(n == 1){
        ans = 1;
    } else {
        ans = n % 2 + mystery(n/2);
    }
}

int main() {
    int n;
    printf("\nWELCOME TO MYSTERY\n");
    printf("\nPlease enter a positive number: ");
    scanf("%d\n", &n);
    printf("%d ", mystery(n));

    return(0);
}