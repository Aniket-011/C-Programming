#include<stdio.h>
//V
int main(){
    int num,power,i =1,pro=1;
    printf("Enter number:");
    printf("Enter power:");
    scanf("%d",&num);
    scanf("%d",&power);
    while(i<=power)
    {
        pro=pro*num;
        i=i+1;
    }
    printf("%d",pro);
    return 0;

}