#include <stdio.h>
#include <string.h>


int main(){

    char osseo[25];
    char tipo[25];
    char alimento[25];

    scanf("%s", &osseo);
    scanf("%s", &tipo);
    scanf("%s", &alimento);

    if(strcmp(osseo,"vertebrado") == 0){
        // é vertebrado
        if(strcmp(tipo,"ave") == 0){
            if(strcmp(alimento,"carnivoro")==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            // é mamifero
            if(strcmp(alimento,"onivoro") == 0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        //é invertebrado
        if(strcmp(tipo,"inseto") == 0){
            if(strcmp(alimento,"hematofago") == 0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(strcmp(alimento,"hematofago") == 0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }


}
