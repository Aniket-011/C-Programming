#include<stdio.h>
void table(int a);
int main(){
    int a;
    printf("enter number here :");
    scanf("%d",&a);
    table(a); // But we use same variable here as we taken input and known as parameter.
    
    
    return 0;
}
void table(int n){ //We can also use different variable here and knowns as formal argument.
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",n*i);
    }
}