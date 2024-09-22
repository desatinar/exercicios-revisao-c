#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume) {
    const float pi = 3.14159265358979323846;
    
    
    // calcula a área da superfície
    *area = 4 * pi * pow(R, 2);
    
    
    // calcula o volume
    *volume = (4.0 / 3.0) * pi * pow(R, 3);
}

int main() {
    float raio = 5.0;
    float area, volume;
    
    calc_esfera(raio, &area, &volume);
    
    printf("área da superfície: %.2f\n", area);
    printf("volume: %.2f\n", volume);
    
    return 0;
}
