/*
PROBLEM STATEMENT :

WRITE A PROGRAM TO STORE NAME, ID AND SALARY OF AN EMPLOYE,
STORE DATA IN ALL THREE ABOVE AND ACCESS THE DATA USING POINTERS
TO STRUCUTRE :

TEST CASE : 

Employee	    Name	        ID	             Salary
    1	        Rahul	        101	            25000.50
    2	        Priya	        102	            32000.00
    3	        Aman	        103	            18000.75
    4	        Simran	        104	            45000.00
    5	        Karan	        105	            27500.25

*/

#include<stdio.h>

struct Emps{
    char name[20];
    int id;
    float salary;

};

int main(){
    struct Emps arr[5];
    struct Emps *ptr;

    for(int i = 0; i < 5; i++) {
        ptr = &arr[i];

        printf("ENTER NAME : ");
        scanf("%s", ptr->name);

        printf("ENTER ID : ");
        scanf("%d", &ptr->id);

        printf("ENTER SALARY : ");
        scanf("%f", &ptr->salary);
        
    }


    for(int j = 0; j < 5; j++) {
        ptr = &arr[j];

        printf("NAME IS : %s\n", ptr->name);
        printf("ID IS : %d\n", ptr->id);
        printf("SALARY IS : %f\n\n", ptr->salary); 
    }
}