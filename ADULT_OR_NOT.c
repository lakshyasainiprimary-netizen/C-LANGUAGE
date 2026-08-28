#include<stdio.h>

int main() {

    int age;

    printf("ENTER AGE OF THE PERSON : ");
    scanf("%d", &age);

    if(age >= 18) {

        printf("THE PERSON IS ADULT");

    }else{
        printf("THE PERSON IS NOT ADULT");


    }

    return 0;
}