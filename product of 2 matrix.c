#include<stdio.h>
#include <stdlib.h>
int main ()
{
    int r1,c1;
    printf("Enter rows and columns of first matrix : ");
    scanf("%d%d",&r1,&c1);
    
    int r2,c2;
    printf("Enter rows and columns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    
    if(c1 != r2)
    {
        printf("We cannot multiply matrices of these two order : ");
        exit(0);
    }
    else
    {
        int m1[r1][c1];
        int m2[r2][c2];
        
        printf("Enter elements in the first matrix : \n");
        for( int i=0;i<r1;i++)
        {
            for( int j=0;j<c1;j++)
            {
                printf("Enter elements at position (%d,%d) : ",i,j);
                scanf("%d",&m1[i][j]);
            }
        }
        
        printf("\nEnter element in second matrix : \n");
        for( int i=0;i<r2;i++)
        {
            for( int j=0;j<c2;j++)
            {
                printf("Enter elements at position (%d,%d) : ",i,j);
                scanf("%d",&m2[i][j]);
            }
        }
        
        int ans[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                int sum=0;
                for(int k=0;k<c1;k++)
                {
                    sum +=m1[i][k] * m2[k][j];
                }
                ans[i][j] = sum;
            }
        }
        
        printf("\nProduct of above two matrices is : \n");
        
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
    
}