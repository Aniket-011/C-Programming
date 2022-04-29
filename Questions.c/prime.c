#include<stdio.h>
//C Program to Check Whether a Number is Prime or Not
int main(){
    int num,a=1,count=0;
    printf("Enter number:");
    scanf("%d",&num);
    while (a<num)
    {
        if (num%a==0)
        
            count++;
        a++;
        
    if (count==2)
    {
        printf("prime");
    }
    return 0;
        
    }
    

}