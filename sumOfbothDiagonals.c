#include<stdio.h>
int main() {
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of columns : ");
    scanf("%d",&col);

    int matrix[row][col];
    printf("Enter elements :\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("Element of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("Matrix :\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
           if(i==j || i+j==col-1) {
            sum += matrix[i][j];
           }
        }  
    }
    printf("Sum of matrix's both diagonal is %d \n",sum);


}