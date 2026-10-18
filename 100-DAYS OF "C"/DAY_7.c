/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>

int main() {
    int TimeInSec; int hrs; int min;
    int RemainingSec; int sec;

    printf("ENTER TIME IN SEONDS : ");
    scanf("%d", &TimeInSec);

    hrs = TimeInSec / 3600;
    RemainingSec = TimeInSec % 3600;

    min = RemainingSec / 60;
    sec = RemainingSec % 60;

    printf("CURRENT TIME IS : %dhr : %dmin : %dsec ", hrs, min, sec);

    return 0;
}