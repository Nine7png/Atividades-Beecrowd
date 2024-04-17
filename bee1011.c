#include <stdio.h>

int main(){
    float r;
    double volume;
    scanf("%f", &r);
    volume = (4/3.0) * 3.14159 * (r*r*r);
    printf("VOLUME = %0.3f\n", volume);

}
