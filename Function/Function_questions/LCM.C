#include<stdio.h>
int LCM(int a);
int main(){
    int n1;
    printf("Enter number here : ");
    scanf("%d",&n1);
    int result=LCM(n1);
    printf("LCM of %d is %d",n1,result);
    return 0;
}
int LCM(int a){
    int x=1;
    for(int i=1; i<=a; i++)
        if (i%a==0)
            x=x*i;
return x;
}
