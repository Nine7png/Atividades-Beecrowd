#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x, tempo;
    float custo;
    scanf("%d", &tempo);
    scanf("%d", &x);
    custo = (x*tempo)/12.0;
    printf("%.3lf\n", custo);

}
