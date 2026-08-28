#include<stdio.h>

int main() {

    int marks;

    printf("ENTER MARKS : ");
    scanf("%d,", &marks);

    if(marks >= 90) {
        printf("A");

    }else if(marks >= 75) {
        printf("B");

    }else if(marks >= 50) {
        printf("C");

    }else if(marks >= 33) {
        printf("D");

    }else{
        printf("F");

    }

    return 0;
}