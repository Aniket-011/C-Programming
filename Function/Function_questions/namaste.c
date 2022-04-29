#include<stdio.h>
void namaste();
void Bonjour();
int main(){
    
    printf("Enter i for Indian and f for French");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        Bonjour();
    }
    
    
    return 0;
}
void namaste(){
    printf("Namaste");
}
void Bonjour(){
    printf("Bonjour");
}