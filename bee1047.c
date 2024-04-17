#include<stdio.h>

int main()
{
    int h,m,hf,mf, horas, minutos;
    scanf("%d %d %d %d",&h,&m,&hf,&mf);

    horas = hf - h;
    minutos = mf - m;

    if(horas == 0 && minutos == 0){
        horas = horas + 24;
    }
    if(horas < 0){
        horas = horas + 24;
    }
    if(minutos < 0){
        minutos = minutos + 60;
        horas = horas - 1;
        if(horas < 0){
            horas = horas + 24;
        }
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas,minutos);
}
