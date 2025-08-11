#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r1,c1;
    printf("enter number of rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);

        int m1[r1][c1];

        printf("Enter elements in matrix:");
        printf("\n");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0;j<c1; j++)
            {
                printf("Enter element at position (%d,%d): ",i,j);
                scanf("%d",&m1[i][j]);

            }
        }

        // Calculate and print sum of each row
    for(int i = 0; i < r1; i++) {
        int row_sum = 0;
        for(int j = 0; j < c1; j++) {
            row_sum += m1[i][j];
        }
        printf("Sum of row %d: %d\n", i, row_sum);
    }

    // Calculate and print sum of each column
    for(int j = 0; j < c1; j++) {
        int col_sum = 0;
        for(int i = 0; i < r1; i++) {
            col_sum += m1[i][j];
        }
        printf("Sum of column %d: %d\n", j, col_sum);
    }

    return 0;
}