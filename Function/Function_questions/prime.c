#include<stdio.h>
int prime(int a);
int main (){
    int n1;
    printf("Enter number here: ");
    scanf("%d",&n1);
    prime(n1);
    return 0;
}
int prime(int a){
    int count=0;
    for (int i=1; i<=a; i++){
        if (a%i==0)
            count++;
    }
    if (count==2)
        printf("Prime");
    else
        printf("Not prime");

}