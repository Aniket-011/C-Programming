#include<stdio.h>
int main (){
    int arr[2][2][3]={{{1,2,3},{4,5,6}},
                    {{7,8,9},{10,11,12}} };
    for(int i=0; i<2; i++){ //Here indicates number of matrices.
                for(int j=0; j<2; j++){ //Here j indicates number row.
            for(int k=0; k<3; k++)// Here indicates number of rows.
            printf("%d ",arr[i][j][k]);
        }
    }
    return 0;
}