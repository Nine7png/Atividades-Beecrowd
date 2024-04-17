#include <stdio.h>
#include <math.h>

int main(){

    int n, hora,minuto,segundo,resto;
    scanf("%d", &n);
    hora = n/3600;
    resto = n%3600;
    minuto = resto/60;
    segundo = resto%60;
    printf("%d:%d:%d\n", hora,minuto,segundo);

}
