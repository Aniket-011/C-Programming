#include<stdio.h>
int main(){
    int num,x,y,z;
    printf("Enter number here \n");
    scanf("%d",&num);
    x=0;
    y=1;
    z=0;
    while (z<=num)
    {
        printf("%d \n",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
    

}