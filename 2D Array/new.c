#include<stdio.h>
int main(){
    int arr[3][2]={1,2,3,4,5,6};
    for(int i=0; i<3; i++){ // i indicates number of rows.
        for (int j=0; j<2; j++){ //j indicates number of coloumn.
            printf("%d ",arr[i][j]);// Here [i][j] intialize with [0][0] and then [1][0] and so on..
        }
    }
    return 0;
}