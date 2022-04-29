#include<stdio.h>
#include<math.h>
int square(double a);
int main(){
    int num;
    printf("Enter number:");
    scanf("%f",&num);
    square(num);
    return 0;
}
int square( double a){
    printf("%f",pow(a,2));
}
