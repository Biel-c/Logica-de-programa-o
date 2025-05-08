#include <stdio.h> 
#include <stdlib.h> 
    
int main() 
 {   
    int dia: 
    printf("\n Digite um numero do dia da semana: ");
    scanf("%d", &dia); 
    
    switch (dia) { 
    case 1: printf("E Domingo"); 
    break; 
    
    case 2: printf("E Segunda Feira"); 
    break; 
    
    case 3: printf("E Terça feira"); 
    break; 
    
    case 4: printf("E Quarta Feira"); 
    break; 
    
    case 5: printf("E Sexta Feira"); 
    break; 
    
    case 6: printf("E Sabado"); 
    break; 
    
    case 7: printf("E Domingo"); 
    break; 
    
    default: printf("Digite um valor entre 1 e 7"); 
    } 
    
    return 0;
}