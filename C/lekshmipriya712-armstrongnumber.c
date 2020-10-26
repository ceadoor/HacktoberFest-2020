// PROGRAM-NAME : armstrong number !
// By Lekshmi Priya
// PROGRAM-CODE :
#include <stdio.h>
int main() {
    int a, n, r, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &a);
    n = a;

    while (n != 0) {
       // remainder contains the last digit
        r = n % 10;
        
       result += r * r * r;
        
       // removing last digit from the orignal number
       n /= 10;
    }

    if (result == a)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.", a);

    return 0;
}
