#include<stdio.h>
int main (){
    int num,i,sum=0,orig;
    printf("Enter number here:");
    scanf("%d",&num);
    orig==num;
    for (int i = 1; i <num; i++)
    {
        num%i==0;
        sum=sum+i;
        
    }
    printf("%d",sum);
    
    return 0;
        
}