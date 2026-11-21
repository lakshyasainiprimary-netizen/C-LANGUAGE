/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
int main(){
    int NUMBER1;
    int NUMBER2;
    int sum;
    int difference;
    int product;
    int quotient;

    printf("ENTER NUMBER1 : ");
    scanf("%d", &NUMBER1);

    printf("ENTER NUMBER2 : ");
    scanf("%d", &NUMBER2);

    sum = NUMBER1 + NUMBER2;

    printf("THE SUM OF NUMBERS ENTERED BY THE USER IS : %d\n", sum);

    difference = NUMBER1 - NUMBER2;
    printf("THE DIFFERENCE OF NUMBERS ENTERED BY THE USER IS : %d\n", difference);
    
    product = NUMBER1 * NUMBER2;
    printf("THE PRODUCT OF NUMBERS ENTERED BY THE USER IS : %d\n", product);

    quotient = NUMBER1 / NUMBER2;
    printf("THE QUOTIENT OF NUMBERS ENTERED BY THE USER IS : %d\n", quotient);
    
    return 0;

}