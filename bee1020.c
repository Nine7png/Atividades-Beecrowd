#include <stdio.h>
#include <math.h>

int main(){

    int n,anos,meses,dias,r;
    scanf("%d",&n);
    anos = n/365;
    r = n%365;
    meses = r/30;
    dias = r%30;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

}
