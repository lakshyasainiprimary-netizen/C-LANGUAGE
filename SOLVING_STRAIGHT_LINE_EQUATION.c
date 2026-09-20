/*Write a program for :

Fitting a straight line through a set of points given as :
(xi, y i ) and  i = 1,....,n.

The straight line equation is :

y = mx + c

All summations are from 1 to n.
*/

#include<stdio.h>
#define MAX 100

int main(){

    int array[MAX][2];//ARRAY DECLARATION :
    int n;

    printf("ENTER VALUE FOR n : ");
    scanf("%d", &n);

    float SumX = 0; float SumY = 0;//DECLARING CARIABLES OF EQUATIONS : 
    float SumXY = 0; float SumXsq = 0;

    for(int i = 0; i < n; i++) {//LOOP FOR VALUE OF i(THE POINT ENTERED BY USER)
        int x; int y;

        printf("ENETR VALUE FOR x : ");
        scanf("%d", &x);

        printf("ENTER VALUE FOR y : ");
        scanf("%d", &y);

        array[i][0] = x;//x CO-ORDINATE OF THE POINT i :
        array[i][1] = y;//y CO-ORDINATE OF THE POINT i :

        SumX += array[i][0]; SumY += array[i][1];//SUMMATION CALCULATION :
        SumXY += array[i][0] * array[i][1]; SumXsq += array[i][0] * array[i][0];
        
    }

       float m = (n*SumXY - SumX * SumY) / (n*SumXsq - SumX * SumX);//FINDING VALUE OF m : 
       float c = (SumY - m*SumX) / n;//FINDING VALUE OF n :

       printf("VALUE OF m is : %f\n", m);//PRINTING m :
       printf("VALUES OF c is : %f\n", c);//PRINTITNG n :
}
