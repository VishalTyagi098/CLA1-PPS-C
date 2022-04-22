#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int m,n;
  scanf("%d %d",&m,&n);
  int tiles=ceil((m*n)/2.0);
  printf("%d",tiles);

  return 0;
}