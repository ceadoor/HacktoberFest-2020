// PROGRAM-NAME : Binary Search
// By Joel sen
// PROGRAM-CODE :


#include<stdio.h>
int search(int a[50],int n,int elt)
{
 int b=0,l=n-1,mid;
 while(b<=l)
 {
  mid=(b+l)/2;
  if(a[mid]==elt)
   return(1);   
  else
   if(a[mid]<elt)
    b=mid+1;
    else
    if(a[mid]>elt)
    l=mid-1;
 }
 if(b>l)
 return(0);
}   
void main()
{
 int n,elt,flag=0;
 int a[50];
 printf("enter elemt no\n");
 scanf("%d",&n);
 printf("enter the array elmts\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 } 
 printf("enter element to be search\n");
 scanf("%d",&elt);
 flag=search(a,n,elt);
 if(flag==1)
 printf("element present\n");
 else
 printf("not present\n");
}  
