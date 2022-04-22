#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  float land;
  scanf("%f",&land);
  float acre=land/43560;
  printf("%.2f sq. ft is equal to %.2f acres",land,acre);

  return 0;
}