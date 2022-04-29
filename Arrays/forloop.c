#include<stdio.h>
int main(){
    int adhar[5];
    int *ptr = &adhar[0];
    for (int i =0; i<5; i++){
        printf("%d index is :",i);
        scanf("%d ",(ptr+i));
    }
    for ( int i=0; i<5; i++){
        printf("%d index is : %d \n",i,*(ptr+i));
    }
    return 0;

}