#include<stdio.h>
int main()
{
    int i,j,k,n;
    float mat[20][20],c,x[10],sum=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("mat[%d][%d] : ", i,j);
            scanf("%f",&mat[i][j]);
        }
    }
    for(j=1; j<=n; j++) /* loop for the generation of upper triangular matrix*/
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=mat[i][j]/mat[j][j];
                for(k=1; k<=n+1; k++)
                {
                    mat[i][k]=mat[i][k]-c*mat[j][k];
                }
            }
        }
    }
    x[n]=mat[n][n+1]/mat[n][n];
    /* this loop is for backward substitution*/
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+mat[i][j]*x[j];
        }
        x[i]=(mat[i][n+1]-sum)/mat[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\t",i,x[i]); /* x1, x2, x3 are the required solutions*/
    }
    return(0);
}