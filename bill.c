#include<stdio.h>

int main(){
    int sold,value,discount,tax,amount,net;
    printf("Enter the price : ");
    scanf("%d",&value);
    printf("Enter the number of item :");
    scanf("%d",&sold);
    printf("Enter the discount on this item :");
    scanf("%d",&discount);
    printf("Enter the value of tax :");
    scanf("%d",&tax);
    amount=((value*sold)-((value*sold)*discount)/100);
    net=amount+((amount*tax)/100);
    printf("The total amount is : %d",net);
    return 0;
}