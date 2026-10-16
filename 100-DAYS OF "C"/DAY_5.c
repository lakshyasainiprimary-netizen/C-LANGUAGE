/*Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>

int main(){
    float celcius;
    float farenheit;

    printf("ENTER VALUE IN CELCIUS : ");
    scanf("%f", &celcius);

    farenheit = (9 * celcius) / 5 + 32;
    printf("CONVERTED CELCIUS->FARENHEIT VALUE IS : %f", farenheit);

    return 0;
}