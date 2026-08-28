#include<stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;

    printf("ENTER ANY FOUR NUMBERS : ");
    scanf("%d, %d, %d, %d", &a, &b, &c, &d);

    if(d > a && d > b && d > c){

        printf("d IS THE LARGEST NUMBER");

        return 0;
        
    }
}