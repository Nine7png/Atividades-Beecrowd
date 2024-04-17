#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float salario;
    scanf("%f", &salario);

    if(salario <= 400){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salario+salario*0.15, salario*0.15);
    }
    else{
        if(salario>400 && salario<=800){
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salario+salario*0.12, salario*0.12);
        }
        else{
            if(salario>400 && salario<=1200){
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salario+salario*0.10, salario*0.10);
            }
            else{
                if(salario>1200 && salario<=2000){
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salario+salario*0.07, salario*0.07);
                }
                else{
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salario+salario*0.04, salario*0.04);
                }
            }
        }
    }
}
