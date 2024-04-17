#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float n1,n2,n3,n4, media, exame, mf;
    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
    media = n1*0.2+n2*0.3+n3*0.4+n4*0.1;

    if(media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }else{
        if(media < 5.0){
            printf("Media: %.1f\n", media);
            printf("Aluno reprovado.\n");
        }else{
            scanf("%f", &exame);;
            mf = (media + exame)/2.0;
            if(mf >= 5.0){
                printf("Media: %.1f\n", media);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1f\n", exame);
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", mf);
            }else{
                printf("Media: %.1f\n", media);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1f\n", exame);
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f", mf);
            }
        }
    }
    
}
