#include <stdio.h>

int main(){

    int d, ponto = 0;
    scanf("%d", &d);

    if(d <= 800){
        ponto = 1;
        printf("%d\n", ponto);
    }
    else{
        if(d>800 && d<=1400){
            ponto = 2;
            printf("%d\n", ponto);
        }
        else{
            ponto = 3;
            printf("%d\n", ponto);
        }
    }

}
