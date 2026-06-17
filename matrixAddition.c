#include<stdio.h>
int main() {
    int row,col;
    printf("Enter number of rows of 1st matrix: ");
    scanf("%d",&row);
    printf("Enter number of columns of 1st matrix: ");
    scanf("%d",&col);

    int row1,col1;
    printf("Enter number of rows of 2nd matrix: ");
    scanf("%d",&row1);
    printf("Enter number of columns of 2nd matrix: ");
    scanf("%d",&col1);

    int matrix[row][col];

    printf("Enter elements :\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("Element of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Matrix 1:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

     int matrix1[row1][col1];

    printf("Enter elements :\n");
    for(int i=0;i<row1;i++) {
        for(int j=0;j<col1;j++) {
            printf("Element of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Matrix 2:\n");
    for(int i=0;i<row1;i++) {
        for(int j=0;j<col1;j++) {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
      }

      if(row != row1 || col != col1) {
         printf("Addition not possible");
         return 0;
      }


    int add[row][col];
    
    printf("Sum of the two matrix :\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            add[i][j] = matrix[i][j] + matrix1[i][j];
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

}