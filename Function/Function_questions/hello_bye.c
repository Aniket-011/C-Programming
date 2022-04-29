#include<stdio.h>
void hello();
void bye();
int main(){
    hello();
    bye();
    return 0;
}
void hello(){
    printf("Hello everyone!\n");
}
void bye(){
    printf("Good bye!");
}