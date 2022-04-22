#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  float km,m,ft,in,cm;
  scanf("%f",&km);
  m=km*1000;
  ft=km*3280.84;
  in=km*39370.1;
  cm=km*100000;
  printf("%.2f m\n",m);
  printf("%.2f ft\n",ft);
  printf("%.2f in\n",in);
  printf("%.2f cm\n",cm);

  return 0;
}