#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char info[11][6]={"one","two","three","four","five","six","seven","eight","nine",  "even","odd"};
    int index;
    for (int i = a; i <= b; i++) {
      if (i <= 9) 
      { 
          index= i-1;                 //position of respective number in array 'info'
          printf("%s\n", info[index]);
      }else {
          if(i%2==0)
          {
              index=9;                                     //position of even in array 'info'
              printf("%s\n", info[index]);
          }
          else {
              index=10;                                   //position of odd in array 'info'
              printf("%s\n", info[index]);
          }
      }
    }
    return 0;
}
