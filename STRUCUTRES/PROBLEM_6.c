/*

PROBLEM STAEMENT : 
WRITE A PROGRAM TO ILLUSTRATE THE METHOD OF SENDING AN ENTIRE
STRUCTURE AS A PARAMETER TO A FUNCTION : 

*/

#include<stdio.h>

struct stores {

    char name[20];
    float price;
    int quantity;
};

struct stores update(struct stores product, float p, int q){
    product.price += p;
    product.quantity += q;

    return (product);
}


int main(){
    float p_increment;
    int q_increment;

    struct stores item = {"ATOMIC HABITS", 5000, 10};

    printf("ENTER NEW PRICE : ");
    scanf("%f", &p_increment);

    printf("ENTER NEW QUANTITY : ");
    scanf("%d", &q_increment);

    item = update(item, p_increment, q_increment);

    printf("NAME OF PRODUCT : %s\n", item.name);
    printf("UPDATED PRICE OF PRODUCT : %f\n", item.price);
    printf("UPDATED QUANTITY OF PRODUCT : %d\n", item.quantity);
}