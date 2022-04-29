#include<stdio.h>
//C Program to Check Whether a Number is Positive or Negative
int main(){
    double num;
    printf("Enter number here");
    scanf("%lf",&num);
    if (num>0)
        printf("%lf Positive number",num);
    else if (num<0)
        printf("%lf Negative number",num);
    else
        printf("Please enter number");
    return 0;
}