/*

PROBLEM STATEMENT : 
GIVEN BELOW IS THE LIST OF MARKS OBTAINED BY A CLASS OF
50 STUDENTS IN AN ANNUAL EXAMINATION.

43, 65, 51, 27, 79, 11, 56, 61, 82, 09, 25, 36, 07, 49, 55, 63, 74, 81, 49, 37,
40, 49, 16, 75, 87, 91, 33, 24, 58, 78, 65, 56, 76, 67, 45, 54, 36, 63, 12, 21, 
73, 49, 51, 19, 39, 49, 68, 93, 85, 59

WRITE A PROGRAM O COUNT THE NUMBER OF STUDENTS BELONGING
TO EAC OF THE FOLLWING GROUPS OF MARKS : 

0 TO 9, 10 TO 19, 20 TO 29,.....,100 :

*/

#include<stdio.h>
#define COUNTER 11
#define MAXVAL 50

int main(){
    float value[MAXVAL];
    int i; int low; int high;
    int group[COUNTER] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("ENTER MARKS OF STUDENTS : ");

    for(i = 0; i < MAXVAL; i++) {
        scanf("%f", &value[i]);//READING OF VALUES:
        
        ++group[(int) value[i] / 10];//COUNTING FREQUECNY OF GROUPS:

    }

    printf("\n");//PRINTING OF THE FREQUENCY TABLE:
    printf("GROUP    RANGE    FREQUENCY\n\n");

    for(i = 0; i < COUNTER; i++){
        low = i * 10;

        if(i == 10) {
            high == 100;

        }else{
            high = low + 9;

            printf("%2d   %3d to %3d    %d\n", i + 1, low, high, group[i]);
        }
    }
}