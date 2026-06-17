#include<stdio.h>
int main() {
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of column: ");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter elements:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("Element of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix :\n");
    for(int i=0;i<col;i++) {
        for(int j=0;j<row;j++) {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}