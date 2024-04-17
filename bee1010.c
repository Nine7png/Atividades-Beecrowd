#include <stdio.h>

int main(){
    int p1, p2, num1, num2;
    float valor1, valor2, pag1, pag2, soma;
    scanf("%d %d %f", &p1,&num1,&valor1);
    scanf("%d %d %f", &p2,&num2,&valor2);
    pag1= num1*valor1;
    pag2= num2*valor2;
    soma= pag1+pag2;
    printf("VALOR A PAGAR: R$ %.2f\n", soma);

}
