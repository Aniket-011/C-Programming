#include<stdio.h>
int main(){
    int num,x,sum=0;
    
    printf("Enter number here:");
    scanf("%d",&num);
    x=num;
    while (num>0)
    {
        sum = sum + (num%10)*(num%10)*(num%10);
        num=num/10;
    }
    if (sum==x)
        printf("Armstrong");
    else
        printf("not armstrong");

    return 0;    
}