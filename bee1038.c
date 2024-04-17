#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int p1, p2;
    float valor, total;
    scanf("%d%d", &p1,&p2);
    valor = 0;
    total = 0;
    
    if(p1 == 1 ){
        valor = 4.0;
    }else{
        if(p1 == 2){
            valor = 4.5;
        }else{
            if(p1 == 3){
                valor = 5.0;
            }else{
                if(p1 == 4){
                    valor = 2.0;
                }else{
                    valor = 1.5;
                }
            }
        }
    }
    total = valor * p2;
    printf("Total: R$ %.2f\n", total);
    
    
