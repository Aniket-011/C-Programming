// Creat program to compute average marks of 5 student by array.
#include<stdio.h>
int main (){
    int marks[5];
    for(int i=0; i<5; i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ",marks[i]);
        
    }
    printf("\n");
    int sum=0; 
    for(int i=0; i<5; i++){
        sum=sum+i;
        
    }
    printf("sum :%d \n",sum);
    printf("Average of marks is %d",sum/5);
    return 0;
}