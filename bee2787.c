#include <stdio.h>

int main(){

    int L,C;
    scanf("%d", &L);
    scanf("%d", &C);

    if(L%2 != 0 && C%2 != 0){
        //ambos são impares
        printf("1\n");
    }
    else{
        if(L%2 != 0 && C%2 == 0){
            //l é impar e c é par
            printf("0\n");
        }
        else{
            if(L%2 == 0 && C%2 == 0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
    }

}
