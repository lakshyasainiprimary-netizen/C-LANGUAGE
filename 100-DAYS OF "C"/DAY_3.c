/*PROBLEM STATEMENT :WRITE A PROGRAM TO FIND AREA AND
THE PERIMETER OF A RECTANGLE:

INPUT SHOULD BE GIVEN BY THE USER : 
*/

#include<stdio.h>

int main(){
    int length;
    int breadth;
    int area;
    int perimeter;

    printf("ENTER THE LENGTH OF RETANGLE : ");
    scanf("%d", &length);

    printf("ENTER THE BREADTH OF THE RECTANGLE : ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("THE AREA OF THE RACTANGLE IS : %d\n", area);

    perimeter = 2 * (length + breadth);
    printf("THE PERIMETER OF THE RECTANGLE IS : %d", perimeter);

    return 0;

}