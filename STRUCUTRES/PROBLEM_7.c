/*

Define a structure data type called time_struct containing three members integer hour, integer
minute and integer second . Develop a program that would assign values to the individual members
and display the time in the following form:

16:40:51

*/

#include<stdio.h>

struct time{
    int hr; int min; int sec;
};

int main(){
    struct time format;

    printf("ENTR NUMBER OF HRS : ");
    scanf("%d", &format.hr);

    printf("ENTER NUMBER OF MINUTES : ");
    scanf("%d", &format.min);

    printf("ENTER NUMBER OD SECONDS : ");
    scanf("%d", &format.sec);

    printf("THE TIME IS : %d : %d : %d", format.hr, format.min, format.sec);

}