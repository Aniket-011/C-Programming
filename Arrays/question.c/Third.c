#include<stdio.h>
int main(){
char ch = 'a';
char* ptr = &ch;
ch++;
printf("%d",*ptr);// Here *ptr gives ascii value of a and it is incremented by 1 therefore it gives b.
return 0;
}