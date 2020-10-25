// PROGRAM-NAME : LinearSearch
// By Joel sen
// PROGRAM-CODE :

#include<stdio.h>
int search(int a[50],int n,int c)
{
  for(int i=0;i<n;i++)
   {
    if(a[i]==c)
     return (1);
   }
}
void main()
{
  int a[50],n,c,d; 
  printf("Enter the size of the array\n ");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(int i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }  
  printf("enter the element you want to serach\n");
  scanf("%d",&c);
  d=search(a,n,c);
  if(d==1)
   printf("Element found\n");
  else
   printf("Element not found\n");
}
