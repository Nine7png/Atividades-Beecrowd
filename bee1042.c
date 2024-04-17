#include <stdio.h>

int main(){
    
    int n1,n2,n3, menor, meio, maior;
    scanf("%d%d%d", &n1,&n2,&n3);
    
    if(n1 < n2 && n1 < n3){
        menor = n1;
    }
    else{
        //n1 não é o menor
        if(n2 < n1 && n2 < n3){
            menor = n2;
        }
        else{
            //n2 não é o menor
            if(n3 < n1 && n3 < n2){
                menor = n3;
            }
        }
    }
    // o menor valor está em menor
    if(n1 > n2 && n1 > n3){
        maior = n1;
    }
    else{
        //n1 não é o maior
        if(n2 > n1 && n2 > n3){
            maior = n2;
        }
        else{
            maior = n3;
        }
    }
    // o maior valor está em maior
    if(n1 > menor && n1 < maior){
        meio = n1;
    }
    else{
        //n1 n é o meio
        if(n2 > menor && n2 < maior){
            meio = n2;
        }
        else{
            meio = n3;
        }
    }
    // o valor intermediario está em meio
    
    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n\n", maior);
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    
}
