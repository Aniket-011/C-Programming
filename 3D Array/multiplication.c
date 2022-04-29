#include<stdio.h>
int main(){
    int a[max][max];
    int arows ,bcoloumn;
    printf("Enter element for matrix");
    scanf("%d %d",arows,bcoloumn);
    printf("Enter element for matrix");
    for(int i=0; i<arows; i++){
        for(j=0; j<bcoloumn; j++){
            scanf("%d",&a[i][j]);
        }
    }

}