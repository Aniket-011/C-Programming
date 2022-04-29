#include<stdio.h>
int armstrong(int a);
int main(){
    int n1;
    printf("Enter three digit number:");
    scanf("%d",&n1);
    armstrong(n1);
    return 0;

}
int armstrong(int a){
    int i,sum=0,orig=a;
    while (a>0)
        sum = sum+(a%10)*(a%10)*(a%10);
        a=a/10;
        if(orig==sum)
            printf("Armstrong");
        else
            printf("Not armtrong");


}