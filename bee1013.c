#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   int a,b,c,AB,maior;
   scanf("%d %d %d", &a,&b,&c);
   AB = (a+b+abs(a-b))/2;
   maior = (AB+c+abs(AB-c))/2;
   printf("%d eh o maior\n", maior);

}
