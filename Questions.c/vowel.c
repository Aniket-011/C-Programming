#include<stdio.h>
//Program to Check Vowel or consonant
int main(){
    char a;
    printf("Enter character here: ");
    scanf("%c",&a);
    if (a=="a" || a=="e" || a=="i" || a=="o" || a=="u")
        printf("%c is a vowel.",a);
    else if (a=="A" || a=="E" || a=="I" || a=="O" || a=="U")
        printf("%c is a vowel.",a);
    else
        printf("%c is a consanent.",a);
    return 0;
}