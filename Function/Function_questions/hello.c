#include<stdio.h>
// Function prototype.
void hello();// Step 1= Here we declare that we make a function of name hello.
int main(){
//Function call.
    hello(); //Step 3= Noe here we call function.
    hello();
    hello();
    return 0;
}
//Function defination.
void hello(){ // Step 2= Now here we make function of name hello.
    printf("Hello! \n");
}