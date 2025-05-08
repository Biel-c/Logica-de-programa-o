#include <stdio.h> 
#include <stdlib.h> 

    int Valores (int pl, int p2, int p3) {
    int mediat = (p1 + p2 + p3) /3; 
    return mediat;
    } 

    int main() 
    int pl,p2,p3, mediat; 
    
    printf("\n\n Digite 3 valores para calcular uma media"); 
    printf("\n Digite o primeiro valor: "); 
    
    scanf("%d", &p1); 
    printf("\n Digite o segundo valor: "); 
    
    scanf("%d", &p2); 
    printf("\n Digite o terceiro valor: "); 
    scanf("%d", &p3); 
    
    mediat = Valores (pl,p2,p3); 
    printf("\n A media e = %d", mediat); 
    
    return 0;