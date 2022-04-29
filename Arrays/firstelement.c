#include<stdio.h>
int main(){
    int arr[10]={6,2,3,4};
    printf("%d \n",arr);
    printf("%d \n",&arr);
    printf("%d \n",*arr);// to find first element of array.
    printf("%d \n",arr[0]);
    printf("%d \n",arr[3]);
    printf("%u \n",&arr);// It gives starting index of array.
    printf("%d \n",arr[3]+1); //It add 1 to 3 index element.
    printf("%d \n",arr[3+1]); //It gives element at 4 index.
    int i=2;
    printf("%d \n",i[arr]);
    return 0;
}