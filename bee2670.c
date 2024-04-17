#include <stdio.h>

int main(){

    int a1,a2,a3,priAndar,segAndar,terAndar;
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    priAndar = a2*2 + a3*4;
    segAndar = a1*2 + a3*2;
    terAndar = a1*4 + a2*2;

    if(priAndar <= segAndar && priAndar <= terAndar){
        //primeiro andar gasta menos tempo
        printf("%d\n", priAndar);
    }
    else{
        if(segAndar <= priAndar && segAndar <= terAndar){
            //segundo andar gasta menos tempo
            printf("%d\n", segAndar);
        }
        else{
            printf("%d\n", terAndar);
        }
    }


}
