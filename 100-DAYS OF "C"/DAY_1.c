/*Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include<stdio.h>

int main(){
    int NUMBER1;
    int NUMBER2;
    int sum;

    printf("ENTER NUMBER1 : ");
    scanf("%d", &NUMBER1);

    printf("ENTER NUMBER2 : ");
    scanf("%d", &NUMBER2);

    sum = NUMBER1 + NUMBER2;

    printf("THE SUM OF NUMBERS ENTERED BY THE USER IS : %d", sum);

    return 0;
}