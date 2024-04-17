#include <stdio.h>

int main(){
    int num, h;
    float valor, salary;
    scanf("%d %d %f", &num,&h,&valor);
    salary = h*valor;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary);

}
