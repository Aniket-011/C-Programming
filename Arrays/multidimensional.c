#include<stdio.h>
int main (){
    int arr[2][4] = {{7,8,9} , {9,5,7}}; // Here [2] indicates that there are tow array in itself
                         // and [4] indicates that there are 4 elements in each array.
    printf("%d \n",arr[0][2]);  //[0] indicates first array elements.
    printf("%d \n",arr[1][1]); //and [1] indicates second.
    return 0;

}