#include<stdio.h>
//C Program to Display Factors of a Number
int main(){
    int num,i;
    printf("Enter number here");
    scanf("%d",&num);
    for (int i = 1; i <= num; ++i)
    {
        if (num%i==0);{
            printf("%d",i);
        }
    }
    
    return 0;
}