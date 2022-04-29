#include<stdio.h>
int HCF(int a, int b);
int main (){
    int  n1, n2;
    printf("Enter number here");
    scanf("%d %d",&n1,&n2);
    int result = HCF(n1 , n2);
    printf("HCF of %d and %d is %d",n1 , n2 ,result);
    return 0;
}     
int HCF(int a, int b){
    int HCF;
    for (int i = 1; i <=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
            HCF=i;

    }
    return HCF;
}