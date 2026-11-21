/*

Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int n, remainder, binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place *= 10;
        n /= 2;
    }

    printf("%d\n", binary);

    return 0;
}