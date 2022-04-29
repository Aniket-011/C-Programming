#include<stdio.h>
//C Program to Check Whether a Character is an Alphabet or not
int main (){
    char a;
    printf("Enter character:\n");
    scanf("%c",&a);
    if (a>='a' & a<='z')
        printf("%c You enterd an alphabet character in lowercase",a);
    else if (a>='A' & a<='Z')
        printf("%c You enterd an alphabet caracter in uppercase",a);
    else    
        printf("You not enterd an alphabet character");
    return 0;

}