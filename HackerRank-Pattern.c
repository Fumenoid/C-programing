#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int hw= n + (n-1);
    for (int i = 0; i < hw; i++) {
      for (int j = 0; j < hw; j++) {
        int min = i < j ? i : j;
        min = min < hw - i ? min : hw - i - 1;
        min = min < hw - j - 1 ? min : hw - j - 1;
        printf("%d ", n - min);
      }
      printf("\n");
    }
    return 0;
}
