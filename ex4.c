#include <stdio.h>
#include <math.h>

    float calcular_distancia (float xl, float yl, float x2, float y2) ( return sqrt (pow (x2 xl, 2) + pow (y2 yl, 2)); 
    
    int main() { 
    float x1 = 4, y1 = 1; 
    float x2 = 1, y2 = 1; 
    float x3 = 4, y3 = 5;
     
    float ladol, lado2, lado3, perimetro: 
    
    ladol = calcular_distancia (x1, y1, x2, y2); 
    lado2 = calcular_distancia (x2, y2, x3, y3); 
    lado3 = calcular_distancia (x3, y3, x1, y1); 
    
    perimetro = ladol + lado2 + lado3; 
    printf("0 perimetro do triangulo e: %.2f\n", perimetro); 
    
    return 0;
    }