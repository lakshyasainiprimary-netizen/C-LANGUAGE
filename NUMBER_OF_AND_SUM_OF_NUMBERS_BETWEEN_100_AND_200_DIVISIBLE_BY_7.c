#include<stdio.h>

int main(){

    int sum = 0;
    int count = 0;

    for(int n = 101; n <= 199; n++) {

        if(n % 7 == 0) {
            count++;
            sum += n;

        }
    }

    printf("TOTAL NUMBERS BETWEEN 100 & 200 DIVISIBLE BY 7 ARE : %d\n", count);
    printf("SUM OF DIVSIBLE DIGITS IS : %d\n", sum);

    return 0;
}