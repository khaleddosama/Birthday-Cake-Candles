#include <stdio.h>

void findMaxAndCount(int candles[], int age, int index, int *maximum, int *count){

    if (index == age){
        return;
    }

    if (candles[index] > *maximum){
        *maximum = candles[index];
        *count = 1;
    }

    else if (candles[index] == *maximum){
        (*count)++;
    }

    findMaxAndCount(candles, age, index + 1, maximum, count);
}

int birthdayCakeCandles(int candles[], int age){
    int maximum = candles[0];
    int count = 0;

    findMaxAndCount(candles,age, 0, &maximum, &count);

    return count;
}

int main()
{
    int age;
    printf("Please enter the age: ");
    scanf("%d", &age);

    int candles[age];

    for (int i = 0; i < age; i++){
        printf("Please enter the candle number %d: ", i + 1);
        scanf("%d", &candles[i]);
    }

     int CountOfMaximumHeight= birthdayCakeCandles(candles, age);

    printf("the maximum height has appeared %d times\n", CountOfMaximumHeight);

    return 0;
}
