#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int arr[n];
  for(int x=0;x<n;x++)
  {
      arr[x]=x+1;
  }
//for Binary And 
  int bAnd=0;
  for(int x=0;x<n-1;x++){
      for(int y=x+1;y<n;y++){
        if ((arr[x] & arr[y]) > bAnd && (arr[x] & arr[y]) < k) {
        bAnd = (arr[x] & arr[y]);
        }
      }
  }
//For Binary Or
  int bOr=0;
  for(int x=0;x<n-1;x++){
      for(int y=x+1;y<n;y++){
        if ((arr[x] | arr[y]) > bOr && (arr[x] | arr[y]) < k) {
        bOr = (arr[x] | arr[y]);
        }
      }
  }
//for Binary Xor
  int bXor=0;
  for (int x = 0; x < n - 1; x++) {
    for (int y = x + 1; y < n; y++) {
      if ((arr[x] ^ arr[y]) > bXor && (arr[x] ^ arr[y]) < k) {
        bXor = (arr[x] ^ arr[y]);
      }
    }
  }
  printf("%d\n", bAnd);
  printf("%d\n", bOr);
  printf("%d\n", bXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

