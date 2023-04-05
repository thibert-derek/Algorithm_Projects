#include <stdio.h>
#include <math.h>

void tower(int n, char A, char B, char C){
    if (n == 1){
        printf("\n Moving disk 1 from peg %c to peg %c", A, B);
        return;
    }
    tower(n-1, A, C, B);
    printf("\n Moving disk %d from peg %c to peg %c", n, A, B, C);
    
    tower(n-1, C, B, A);
   // printf("\nNumber of steps: %d\n", steps);
}

int main(){
    int n;
    printf("\n WELCOME TO TOWER OF HANOI: \n");
    printf("\n Please enter a number of disks: \n");
    scanf(" %d",&n);

    tower(n, 'A', 'B', 'C');
    n = pow(2,n)-1;
    printf("\n Number of Steps: %d", n);
    printf("\n All Done! \n");
    return 0;
}