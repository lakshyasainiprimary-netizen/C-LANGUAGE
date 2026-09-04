/* PROBLEM STATEMENT :

Given a list of marks ranging from 0 to 100 :

Write a program to compute and print the number of
students:

(a) who have obtained more than 80 marks,
(b) who have obtained more than 60 marks,
(c) who have obtained more than 40 marks,
(d) who have obtained 40 or less marks,
(e) in the range 81 to 100,
(f) in the range 61 to 80,
(g) in the range 41 to 60, and
(h) in the range 0 to 40.

NOTE : The program should use a minimum number of if statements.
*/

#include<stdio.h>

int main(){

    int n;

    printf("ENTER VALUE FOR n : ");
    scanf("%d", &n);

    int A = 0; int B = 0;
    int C = 0; int D = 0;
    
    for(int students  = 0; students < n; students++) {
        
        int marks;

        printf("ENTER MARKS CORRESPONDING TO n :  ");
        scanf("%d", &marks);

        if(marks >= 81 && marks <= 100) {
            A++;

        }else if(marks >= 61 && marks <= 80) {
            B++;

        }else if(marks >= 41 && marks <= 60) {
            C++;

        }else if(marks >= 0 && marks <= 40) {
            D++;

        }else{
            printf("MARKS ARE NOT IN THE GIVEN RANGE");


        }
    }

        printf("NUMBER OF SUDENTS WHO SCORED > 80 ARE : %d\n", A);
        printf("NUMBER OF SUDENTS WHO SCORED > 60 ARE : %d\n", A + B);
        printf("NUMBER OF SUDENTS WHO SCORED > 40 ARE : %d\n", A +B + C);
        printf("NUMBER OF SUDENTS WHO SCORED <= 40 ARE : %d\n\n", D);

        printf("NUMBER OF STUDENTS WHO SCORED IN RANGE OF 81 - 100 ARE : %d\n", A);
        printf("NUMBER OF STUDENTS WHO SCORED IN RANGE OF 61 - 80 ARE : %d\n", B);
        printf("NUMBER OF STUDENTS WHO SCORED IN RANGE OF 41 - 60 ARE : %d\n", C);
        printf("NUMBER OF STUDENTS WHO SCORED IN RANGE OF 0 - 40 ARE : %d\n", D);

        return 0;
}