#include<stdio.h>
//Find the Largest Number Among Three Numbers
int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if (a>b && a>c)
        printf("%d is greatest nuumbr:",a);
    
    else if (b>c && c>a);
        printf("%d is greatest nuumbr:",b);
    
    else
        printf("%d is greatest nuumbr:",c);
    
    return 0;
}