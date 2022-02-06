#include <stdio.h>
int main(){
    int rows;
    int column;
    printf("Enter number of rows and columns:");

    scanf(" %d",&rows);
    scanf(" %d",&column);
    
    int arr1[rows][column];

    for (int i=0;i<rows;i++){
        printf("Enter row %d\n",i+1);
        for (int j=0; j<column;j++){
            int x1;
            scanf("%d",&x1);
            arr1[i][j]=x1;
            
        }

    }
    printf("Diagonal flip of the matrix is \n");
    for (int i=column-1;i>=0;i--){
        for (int j=rows-1; j>=0;j--){
            printf("%d ",arr1[j][i]); 
        }
        printf("\n");

    }

}