/*

PROBLEM STATEMENT : 
WRITE A PROGRAM TO FIND THE SUBJECT-WISE 
AND STUDENT-WISE TOTALS AND STORE THEM
AS A PART OF THE STRUCUTRE : 

*/

#include<stdio.h>

struct marks{
    int sub1; int sub2;
    int sub3; int total;

};

int main(){
    int i;

    struct marks student[3] = {{45, 67, 81, 0}, {75, 53, 69, 0}, {57, 36, 71, 0}};
    struct marks total = {0, 0, 0, 0};

    for(i = 0; i < 3; i++) {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;

        total.sub1 += student[i].sub1;
        total.sub2 += student[i].sub2;
        total.sub3 += student[i].sub3;

        total.total += student[i].total;
    }

    printf("STUDENT        TOTAL\n\n");

    for(i = 0 ; i < 3; i++) {
        printf("STUDENT[%d]      %d\n", i+1, student[i].total);

    }
        printf("\nSUBJECT    TOTAL\n\n");
        printf("%s %d\n%s %d\n%s %d\n", "Subject1   ", total.sub1,"Subject2   ", total.sub2,"Subject3   ", total.sub3);

}