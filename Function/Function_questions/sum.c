#include<stdio.h>
int sum(int a ,int b);// Step 1.Here we first made a function for sum
int main (){
    int a , b;
    printf("Enter first number");// Step 2.Then from here we take input
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    int s = sum (a,b); // Step 4. Here we call function and store in int s.
    printf("Sum is %d",s);
    return 0;
}
int sum(int a ,int b){//Step 3. Here we define function
    return a+b;
}
