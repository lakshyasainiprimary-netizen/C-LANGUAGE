/*Problem statement — Declare, input, and display a structure.

Task: Create a structure called Student with these three members:
- int rollNo
- char grade
- float marks

Inside main():
1. Declare a structure variable called s1.
2. Take input from the user for all three members.
3. Display all three values.
*/

#include<stdio.h>

struct Student{
    int RollNo;
    char Grade;
    float Marks;

};

int main(){
    struct Student S1;

    printf("ENTER RollNo : ");
    scanf("%d", &S1.RollNo);

    printf("ENTER Grade : ");
    scanf(" %c", &S1.Grade);

    printf("ENTER Marks : ");
    scanf("%f", &S1.Marks);

    printf("STUDENT DETAILS ARE :\n\n");
    printf("RollNo : %d\n", S1.RollNo);
    printf("Grade : %c\n", S1.Grade);
    printf("Marks : %f\n", S1.Marks);

    return 0;
}