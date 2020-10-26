// PROGRAM-NAME : MinMaxPointer
// By Joel sen
// PROGRAM-CODE :


#include<stdio.h>
void minmax(int a[10],int n, int *min, int *max)
{
 *min=*max=a[0];
  for(int i=0;i<n;i++)
  {
   if(a[i]> *max)
    *max=a[i];
   if(a[i]<*min)
    *min=a[i];
  }

}

void main()
{
 int a[10],min,max,n;
 printf("enter size of array\n");
 scanf("%d",&n);
 printf("enter array elements\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 minmax(a,n,&min,&max);
  printf("min=%d and max=%d\n", min,max);
}
