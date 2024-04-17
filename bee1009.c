#include <stdio.h>

int main(){
    char nome[20];
    float salary, vendas;
    double bonus;
    scanf("%s", &nome);
    scanf("%f %f", &salary,&vendas);
    bonus = salary + (vendas*0.15);
    printf("TOTAL = R$ %0.2f\n", bonus);

}
