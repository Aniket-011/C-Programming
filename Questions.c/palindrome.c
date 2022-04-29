#include<stdio.h>
//C Program to Check Whether a Number is Palindrome or Not
int main(){
    int num,rev=0,orig;
    orig=num;
    printf("Enter number:");
    scanf("%d",&num);
    while (num>0)
    {
        rev=rev*10 + num%10;
        num=num/10;
    }
    if (orig==rev)
    
        printf("Number is Palindrome");
    
    else
    
        printf("Number is not Palindrome");
    
    return 0;    
}