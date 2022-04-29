#include<stdio.h>
//Write a program to Convert Fahrenheit temperature in to Celsius
int main(){
    float c,f;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in celcius is : %0.3f",c);
    return 0;

}