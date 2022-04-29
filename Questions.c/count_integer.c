#include<stdio.h>
//C Program to Count Number of Digits in an Integer
int main(){
    int num,count=0;
    printf("Enter number here: \n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        count=count+i;
    }
    printf("Number of digits in integer %d is %d:",num,count);
    return 0;
    


}