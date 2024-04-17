#include <stdio.h>

int main(){

    int dia,h,m,s,diaf,hf,mf,sf;
    int segundos, minutos, horas, dias;
    char evento[10], eventof[10];
    scanf("%s %d", &evento,&dia);
    scanf("%d : %d : %d", &h,&m,&s);

    scanf("%s %d", &eventof,&diaf);
    scanf("%d : %d : %d", &hf,&mf,&sf);

    segundos= sf - s;
    minutos= mf - m;
    horas= hf - h;
    dias= diaf - dia;

    if(segundos < 0){
        segundos += 60;
        minutos = minutos - 1;
    }
    if(minutos < 0){
        minutos += 60;
        horas = horas - 1;
    }
    if(horas < 0){
        horas += 24;
        dias = dias - 1;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

}
