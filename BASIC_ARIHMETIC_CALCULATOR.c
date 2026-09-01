//BASIC ARITHMETIC CALCULATOR :

#include<stdio.h>

int main(){

    int a; int b;
    char op;

    printf("ENTER THE NUMBERS : ");
    scanf("%d %d", &a, &b);

    printf("SELECT THE OPERATION YOU WANT TO PERFORM : \n\n");
    printf("ENTER + FOR ADDITION : \nENTER - FOR SUBTRACTION : \nENTER * FOR MULTIPLICATION : \nENTER / FO DIVISION : \nENTER PERCENT FOR REMAINDER :\n\nTHE SELECTED OPERATION IS : ");

    scanf(" %c", &op);

    if(op == '+'){
        printf("SUM IS : %d", a + b);

    }else if(op == '-') {
        printf("DIFFERENCE IS : %d", a - b);

    }else if(op == '*') {
        printf("MULTIPLICATION IS : %d", a * b);

    }else if(op == '/') {
        printf("DIVISION IS : %d", a / b);

    }else if(op == '%') {
        printf("REMAINDER IS : %d", a % b);

    }else {
        printf("THE OPERATION IS IN-VALID");

    }

    return 0;
}