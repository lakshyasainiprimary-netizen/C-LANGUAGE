/* PROBLEM STATEMENT : 

A set of two liner equations with two un-knowns x1 and x2 is given below :

ax1 + bx2 = m
cx1 + dx2 = n

The set has a unique solUtion :

x1 = (md - bn) / (ad - cb)
x2 = (na - mc) / (ad - cb)

provided the denominator ad - cb in not equal to zero.

Write a program that will read the values of constanta a,b,c,d,m and n
and compute the values of x1 and x2. Appropriate message should be displays if :

ad - cb = 0.
*/

#include<stdio.h>

int main(){

    float a;
    float b;
    float c;
    float d;
    float m;
    float n;

    printf("ENTER VALUE FOR a : ");
    scanf("%f", &a);

    printf("ENTER VALUE FOR b : ");
    scanf("%f", &b);

    printf("ENTER VALUE FOR c : ");
    scanf("%f", &c);

    printf("ENTER VALUE FOR d : ");
    scanf("%f", &d);

    printf("ENTER VALUE FOR m : ");
    scanf("%f", &m);

    printf("ENTER VALUE FOR n : ");
    scanf("%f", &n);


    if((a*d - c*b) == 0) {
        printf("THE GIVEN SET DOESN'T HAVE A UNIQUE SOLUTION\n");

    }else{
        float x1 = (m*d - b*n) / (a*d - c*b);
        printf("VALUE OF x1 IS : %f\n", x1);

        float x2 = (n*a - m*c) / (a*d - c*b);
        printf("VALUE OF x2 IS : %f\n", x2);

    }

    return 0;
}