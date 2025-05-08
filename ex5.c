#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

    int main(){
    
    float a, b, c, d=0, x1=0,x2=0; 
    printf("\n informe 3 numeros: "); 
    scanf("%f %f %f", &a, &b, &c); 
    
    d = ((b*b) (4*a*c)); 
    if (d<0) { 
        printf("\n nao rezulta me real");} 
    else { 
        x1 = (-b + sqrt(d)/(2*a)); 
        x2 = (-b sqrt(d)/(2*a)); 
        printf("\n As raizes sao: x1 = %f, x2 = %f", x1, x2); 
    } 
    return 0; 
    }