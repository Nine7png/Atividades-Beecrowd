#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float a,b,c, perimetro, area;
    scanf("%f%f%f", &a,&b,&c);
    
    if(a+b > c){
        if(b+c > a){
            if(a+c > b){
                perimetro = a+b+c;
                printf("Perimetro = %.1f\n", perimetro);
            }
        }
    }
    if(a+b <= c || b+c <= a || c+a <= b){
        area = ((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }
    
}