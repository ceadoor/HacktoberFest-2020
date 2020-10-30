// PROGRAM-NAME : Matrix Multiplication
// By  Joel Johnson
// PROGRAM-CODE :

import java.util.Scanner; 

class demo {
public static void main(String…s) {
  int i,j,m,n,p,q,k;
  Scanner sc=new Scanner(System.in); 

  System.out.print(“Enter number of rows and columns of first matrix:”);
  m=sc.nextInt();
  n=sc.nextInt();
  System.out.print(“Enter number of rows and columns of second matrix:”);
  p=sc.nextInt();
  q=sc.nextInt();

  if(n!=p)
  System.out.print(“nSorry multiplication can’t be done!!”);
  else {
    int a1[][]=new int[m][n];
    int a2[][]=new int[p][q];
    int a3[][]=new int[m][q]; 

    System.out.print(“nEnter elements of first matrix:n”);
    for(i=0;i<m;++i)
    for(j=0;j<n;++j)
    a1[i][j]=sc.nextInt();

    System.out.print(“nEnter elements of second matrix:n”);
    for(i=0;i<p;++i)
    for(j=0;j<q;++j)
    a2[i][j]=sc.nextInt();

    System.out.print(“nMultiplication of Matrices:n”);

    for(i=0;i<m;++i)
    {
      for(j=0;j<q;++j)
      {
         a3[i][j]=0;
         for(k=0;k<n;++k)
            a3[i][j]=a3[i][j]+(a1[i][k]*a2[k][j]);

       System.out.print(a3[i][j]+” “);
      }
    System.out.print(“n”); 
    }
  }
}
}
