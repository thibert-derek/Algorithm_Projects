#include <stdio.h>

int main(){
    float highscore1, highscore2, highscore3, highscore4, highscore5;

    highscore1 = 1000.02;
    highscore2 = 567.98;
    highscore3 = 965.23;
    highscore4 = 175.90;
    highscore5 = 654.87;

    puts("Here are the high scores:");
    printf("#1 %.2f\n",highscore1);
    printf("#2 %.2f\n",highscore2);
    printf("#3 %.2f\n",highscore3);
    printf("#4 %.2f\n",highscore4);
    printf("#5 %.2f\n",highscore5);

    return (0);
}