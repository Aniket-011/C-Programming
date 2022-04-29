// Program to calculate the sum of array elements by passing to a function 
#include<stdio.h>
int sumarray(int num ,int n);
int main (){
    int num[]={31,2,3,4,5,6,7,8,9,10};
    int result=sumarray[num];
    printf("%d",result);
    return 0;



}
int sumarray(int num , int n){
    int sum =0;
    for(int i=0 ; i<n; i++){
        sum += num[i];

    }
    return sum;
}