#include<stdio.h>
int reverse(int a);
int main (){
    int n1;
    printf("Enter number here: ");
    scanf("%d",&n1);
    reverse(n1);
    return 0;
}
int reverse(int a){
    int rev=0;
    while (a>0){
        rev =rev*10 + a%10;
        a=a/10;
    }
    printf("%d",rev);
}