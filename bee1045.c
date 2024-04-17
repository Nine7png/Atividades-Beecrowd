#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a,b,c,aux;
    scanf("%f%f%f", &a,&b,&c);

    if(a>b && a>c){
        //A é o maior valor
        if(b<c){
            aux=b;
            b=c;
            c=aux;
        }

    }
    else{
        if(b>a && b>c){
            //B é o maior valor
            aux=a;
            a=b;
            b=aux;
            if(b<c){
                aux=b;
                b=c;
                c=aux;
            }
        }
        else{
            if(c>a && c>b){
                aux=a;
                a=c;
                c=aux;
                if(b<c){
                    aux=b;
                    b=c;
                    c=aux;
                }
            }
        }
    }
    
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if((a*a)==b*b+c*c){
            printf("TRIANGULO RETANGULO\n");
        }
        if((a*a)>b*b+c*c){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a*a)<b*b+c*c){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }else{
            if(a==b || a==c || b==a || b==c){
                printf("TRIANGULO ISOSCELES\n");
            }   
        }
    }
}
