#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n, rem,sum, k;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    k=n;
    while(k>0)
    {
        rem=k%10;   //stores the last digit of the number in rem.
        sum += rem; //add digits into sum.
        k=k/10;     //removes the last digit, so the second last digit becomes the last digit for the next iteration of while loop :)
    }
    printf("%d", sum);
    return 0;
}
