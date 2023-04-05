#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

clock_t start, end;

void twistedTower(int n, char front, char middle, char last)
{
    if (n == 1) {
        printf(" Moving disk from %d from rod %c to %c and then onto %c\n", n, front, middle, last);

        return;
    }

    twistedTower(n-1, front, middle, last);

    printf(" Moving disk %d from rod %c to %c\n" , n, front, middle);

    twistedTower(n-1, last, middle, front);

    printf(" Moving disk %d from rod %c to %c\n", n, middle, last);

    twistedTower(n-1, front, middle, last);
}

int main(){
    int n;
    printf("\n WELCOME TO TWISTED TOWER OF HANOI: \n");
    printf("\n Please enter a number of disks: \n");
    scanf(" %d",&n);

    start = clock();
    twistedTower(n, 'A', 'B', 'C');
    n = pow(3,n)-2;
    printf("\n Number of Steps: %d", n);
    printf("\n All Done! \n");
    end = clock();
    double elapsedTime = (double)(end-start) / CLOCKS_PER_SEC;
    printf("\n Time it took in seconds is %.3f\n", elapsedTime);
    return 0;
}