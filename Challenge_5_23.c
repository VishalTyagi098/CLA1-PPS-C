#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int sec,s,h,m,d;
  scanf("%d",&sec);

  d=sec/86400;
  sec=sec%86400;
  
  h=sec/3600;
  sec=sec%3600;

  m=sec/60;
  s=sec%60;

  printf("The Duration is %d days %d hours %d minutes %d seconds",d,h,m,s);
  return 0;
}