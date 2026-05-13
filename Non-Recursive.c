#include <stdio.h>
#include <stdlib.h>

int birthdayCakeCandlesNonRecursive(int candles[], int age){
    int Maximum = candles[0];
    int count = 1;

    for(int i = 1; i < age; i++){

        if(candles[i] > Maximum){
            Maximum = candles[i];
            count = 1;
        }

        else if(candles[i] == Maximum){
            count++;
        }
    }

    return count;
}

int main()
{
    int age;
    printf("Please enter the age: ");
    scanf("%d",&age);

    int candlesHeights[age];
    for(int i=0;i<age;i++){
        printf("Please enter the candle number %d: ",i+1);
        scanf("%d",&candlesHeights[i]);
    }

    int CountOfMaximumHeight=birthdayCakeCandlesNonRecursive(candlesHeights,age);
    printf("the maximum height has appeared %d times",CountOfMaximumHeight);
}

