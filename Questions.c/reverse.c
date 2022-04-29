#include<stdio.h>
//C Program to Reverse a Number
int main(){
    int num,rev=0;
    printf("Enter any number :\n");
    scanf("%d",&num);
    while (num>0)
    {
        rev=rev*10 + num%10;
        num=num/10;
    }
    printf("Reverse of number is %d",rev);
    return 0;
    
    
}