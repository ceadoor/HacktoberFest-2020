// PROGRAM-NAME : CheckPalindrome
// By Merin P Reji
// PROGRAM-CODE :
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],rstr[100];
    int i,j,ln;
    printf("Enter the string(word): ");
    scanf("%s",str);
    ln=strlen(str);// reversing the string
    for(i=ln-1,j=0;i>=0;i--,j++)
          rstr[j]=str[i];
    rstr[j]='\0';
    if(strcmp(rstr,str)==0)
       printf("Palindrome\n");
    else
       printf("Not Palindrome\n");
 }
