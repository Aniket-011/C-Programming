#include<stdio.h>
//C Program to Find LCM of two Numbers
int main (){
    int a,lcm=1;
    printf("Enter number here \n");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        if (i%a==0)
            lcm=lcm*i;
    }
    printf("LCM of %d is %d",a,lcm);
    return 0;
}