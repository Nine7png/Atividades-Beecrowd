#include <stdio.h>
#include <math.h>

int main() {

    int saque, troco, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    scanf("%d", &saque);
    notas100 = saque/100;
    troco = saque % 100;
    notas50 = troco/50;
    troco = troco % 50;
    notas20 = troco/20;
    troco = troco%20;
    notas10 = troco/10;
    troco = troco%10;
    notas5 = troco/5;
    troco = troco%5;
    notas2 = troco/2;
    notas1 = troco%2;
    printf("%d\n", saque);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}
