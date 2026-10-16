/*Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>

int main(){
    float SI; float principle;
    float CI; int rate; float time;

    printf("ENTER VALUE FOR PRINCIPLE : ");
    scanf("%f", &principle);

    printf("ENTER VALUE FOR RATE : ");
    scanf("%d", &rate);

    printf("ENTER VALUE FOR TIME : ");
    scanf("%f", &time);

    SI = (principle * rate * time) / 100;
    printf("SI : %.2f\n", SI);

    CI = principle * pow(1 + rate / 100.0, time) - principle;
    printf("CI : %.2f", CI);

    return 0;
}