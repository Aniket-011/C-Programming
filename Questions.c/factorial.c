#include<stdio.h>
//C Program to Find Factorial of a Number
int main (){
    int num,i;
    unsigned long long fact=1;
    printf("Enter positive integer");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        fact*=i;
    }
   
    printf("Factorial of number  is: %d = %llu", num, fact);
    return 0; 
}