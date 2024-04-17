#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int hi,hf, h;
    scanf("%d %d", &hi,&hf);

    if(hi==0 && hf==0){
        h=abs((hi-hf)- 24);
    }
    else{
        if(hi<12){
            h=abs(hi-hf);
        }
        else{
            h=abs(abs(hi-hf)- 24);
        }
        
    }

    printf("O JOGO DUROU %d HORA(S)\n", h);

}
