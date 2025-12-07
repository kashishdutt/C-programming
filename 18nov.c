#include <stdio.h>
int main()
{
    int a [10][10];
    int rows,cols,i,j ;
    printf("Enter number of rows and columns: ");
    scanf("%d", &rows, &cols);
    int arr [rows][cols];
    printf("Enter the elements in 2D array/matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements in 2D array/matrix are:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}