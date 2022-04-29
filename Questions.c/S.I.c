#include<stdio.h>
//Write a program to Compute Simple Interest.
int main (){
    int P,r,T,A;
    printf("Enter initial balance: ");
    scanf("%d",&P);
    printf("Enter time interval: ");
    scanf("%d",&T);
    printf("Enter annual intrest rate in percentage: ");
    scanf("%d",&r);
    A=P*(1+r*T);
    printf("Final amount: %d",A);
    return 0;
}