#include<stdio.h>
int main(){
    int year;
    printf("Enter year \n");
    scanf("%d",&year);
    if (year%400==0 & year%100==0)
        printf("%d Leap year",year);
    else if (year%4==0 & year%100!=0)
        printf("%d Leap year",year);
    else
        printf("%d Not leap year",year);
    return 0;
}