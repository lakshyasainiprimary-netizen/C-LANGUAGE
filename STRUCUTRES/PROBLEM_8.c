/*

Define a structure data type named date containing three integer members :

day , month , and year.

Develop an interactive modular program to perform the following tasks:

-> To read data into structure mem bers by a function.
-> To validate the date entered by another function.
-> To print the date in the format :

April 29, 2002, by a third function.
The input data should be three integers like 29, 4, and 2002 corresponding to day, month, and year.

Examples of invalid data:

31, 4, 2002 – April has only 30 days.
29, 2, 2002 – 2002 is not a leap year.

*/

#include<stdio.h>

struct date {
    int month; int day; int year; char check;
};

struct date input(struct date D);
struct date validate(struct date D);


int main() {
    struct date D;

    D = input(D);

    D.check = 'v';
    D = validate(D);

    char MONTH[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if(D.check == 'i') {
        printf("THE DATE IS IN-VALID");
    
    }else{
        printf("THE DATE IS : %s %d, %d", MONTH[D.month - 1], D.day, D.year);

    }

}


struct date input(struct date D) {
    printf("ENTER MONTH : ");
    scanf("%d", &D.month);

    printf("ENTER DAY : ");
    scanf("%d", &D.day);

    printf("ENTER YEAR : ");
    scanf("%d", &D.year);

    return (D);
}


struct date validate(struct date D) {
    int countDigit = 0;
    int temp = D.year;

    int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    

    if(D.month >= 1 && D.month <= 12) {

    }else {
            D.check = 'i';
            return D;
    }

    if(D.day <= 0) {
            D.check = 'i';
            return D;
    }

    if(D.year <= 0) {
        D.check = 'i';
        return D;
    }

    while(temp > 0) {
        temp = temp / 10;
        countDigit++;
    }

    if(countDigit != 4) {
        D.check = 'i';
        return D;
    }

    if(D.year % 400 == 0 || (D.year % 4 == 0 && D.year % 100 != 0)) {
        
        if(D.month == 2) {
                day[1] = 29;
        }    

    }else if(D.day > 28 && D.month == 2) {
            D.check = 'i';
            return D;
    }
    
    if(D.day > day[D.month - 1]) {
        D.check = 'i';
        return D;
    }

        return D;
}