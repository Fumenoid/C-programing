#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n) {
  static int x =3;
  static int sum=0;
  if(x>0) {
   sum += n;
   x--;
   find_nth_term(n-1);
  }
  return sum;
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    if(n==1) {
        printf("%d", a);
    }else if(n==2) {
        printf("%d", b);
    }else if(n==3) {
        printf("%d", c);
    }else {
    int ans = find_nth_term(n);
    printf("%d", ans);
    } 
    return 0;
}


