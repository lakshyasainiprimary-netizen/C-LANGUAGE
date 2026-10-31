/*Pointers to Structures :

Write a C program that :
Stores a student's details: roll number, grade, and marks.
The program should accept the details from the user 
and then display them, accessing the structure's members 
through a pointer.
*/

#include<stdio.h>

struct student{
    char name[20];
    int id;
    char branch[25];
};

int main(){
    struct student s1;
    struct student *ptr;

    ptr = &s1;
    printf("ENTER NAME : ");
    scanf("%s", &ptr->name);

    printf("ENTER ID : ");
    scanf("%d", &ptr->id);

    printf("ENTER BRANCH : ");
    scanf("%s", &ptr->branch);

    printf("THE BRANCH IS : %s", ptr->name);
    printf("ID IS : %d", ptr->id);
    printf("BRANCH IS : %s", ptr->branch);
    return 0;
}