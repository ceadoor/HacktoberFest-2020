// PROGRAM-NAME : Even numbers
// By Siddhardh.R.Nair
// PROGRAM-CODE :

#include<stdio.h> 
 
int main(){
    
    for(int i=1;i<=100;i++)
    {   
        // if number module i is equal to 0, then number is even
        if(i%2==0)
        {
            printf("%d\n", i);    
        }
    }
    return 0;
}
