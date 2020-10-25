// PROGRAM-NAME : Print Matrix
// By Merin P Reji
// PROGRAM-CODE :
#include<stdio.h>
void main()
{
    int a[100][100],r,c,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("\nEnter the number of columns:");
    scanf("%d",&c);
    printf("\nEnter the elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nThe Matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",a[i][j]);
    printf("\n");
    }
    
}
