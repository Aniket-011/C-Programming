
//Reverse of an array.
#include<stdio.h>
int main(){
    int arr[5]={5,6,7,8,9};
    printf("Original array is \n");
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Reverse array is \n");
    for(int i=4; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}