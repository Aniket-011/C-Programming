#include<stdio.h>
//C Program to Calculate the Sum of Natural Numbers
int main (){
    int num,sum,i;
    printf("Enter a positive number \n");
    scanf("%d",&num);
    sum=0;
    for ( i = 0; i <= num; ++i)
    {
        sum=sum+i;
    }
     printf("Sum of numbers is %d:",sum);
    return 0;

}