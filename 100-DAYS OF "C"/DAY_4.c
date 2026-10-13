/*PROBLEM STATEMENT : WRITE A PROGRAM TO FIND THE AREA AND 
CIRCUMFERENCE OF A CIRCLE.

VALUES SHOULD BE GIVEN BY THE USER :*/

#include<stdio.h>

int main(){
    float area;
    float circumference;
    float radius;

    printf("ENTER RADIUS : ");
    scanf("%f", &radius);

    area = 3.14 * (radius*radius);
    circumference = 2 * 3.14 * radius;

    printf("AREA OF THE CIRCLE IS : %f\n", area);
    printf("CIRCUMFERENCE OF THE CIRCLE IS : %f", circumference);

    return 0;

}