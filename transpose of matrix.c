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

        int transpose[c1][r1];

        for(int i = 0 ; i<r1;i++)
        {
            for(int j = 0; j<c1 ; j++)
            {
                transpose[j][i] = m1[i][j];
            }
        }

        printf("\nTranspose of above matrix is : \n");
        for(int i = 0; i<c1; i++)
        {
            for(int j = 0 ; j<r1;j++)
            {
                printf("%d ",transpose[i][j]);
            }
            printf("\n");
        }

    return 0;
}