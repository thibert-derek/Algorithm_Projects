#include <stdio.h>

int coinChange(int d[], int n, int k){
    int minCoinsUsed[0];
    int lastCoinUsed[0];
    int cents = 1;
    int changeAmount = 1;
    int minCoins = 1;
    int numOfDenominations = 1;
    int valueOfDenomination[0];

    while (cents <= changeAmount){
        minCoins = cents;
        int newCoin = 1;
        int j = 1;
        while ( j < numOfDenominations){
            if (valueOfDenomination[j] <= cents){
                if (minCoinsUsed[cents - valueOfDenomination[j]] + 1 < minCoins){
                    minCoins = minCoinsUsed[cents - valueOfDenomination[j]] + 1;
                    newCoin = valueOfDenomination[j];
                }
            }
            j = j + 1;
        }
        minCoinsUsed[cents] = minCoins;
        lastCoinUsed[cents] = newCoin;
        cents += 1;
    }
    return minCoinsUsed[], lastCoinUsed[];
}

int main(){
    int a = [1, 2, 3, 4, 5];

    
}