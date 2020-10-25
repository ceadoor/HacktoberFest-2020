// PROGRAM-NAME : Bubble Sort
// By Merin P Reji
// PROGRAM-CODE :
#include <stdio.h>
int main()
{
    int n, i,j,a[100],temp,flag;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter the list of elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i = 0; i < n; i++)
    {
      for(j = 0; j < n-i-1; j++)
       {
            // introducing a flag to monitor swapping
        flag = 0;
        if( a[j] > a[j+1])
          {
                // swap the elements
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                // if swapping happens update flag to 1
                flag = 1;
            }
      }
      if ( flag==0) break;// if no swapping the list is sorted
     }
     printf("The sorted list is ...\n");
     for(i=0;i<n;i++)
      printf("%d\n",a[i]);
}
