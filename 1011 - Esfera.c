#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#include <math.h>
int main(){
    double raio, volesf;
    scanf("%lf",&raio);
    volesf = (4/3.0) * PI * pow(raio,3);
    printf("VOLUME = %.3lf\n",volesf);
    return 0;
}
