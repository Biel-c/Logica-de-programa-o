#include <stdio.h> 
#include <stdlib.h> 

int main() 
  {  
    float sldi, slr, sidp = 0, ret; 
    printf("\n Saldo incial:$ "); 
    scanf("%f", &sldi); 
    
    printf("\n Salario:$"); 
    scanf("%f", &slr); 
    
    sldp = sldi + slr; 
    printf("\n Saldo parcial:$%2.f", sldp); 
    
    printf("\n 1a retirada:$"); 
    scanf("%f", &ret); 
    
    sldp = sldp + ret;
    printf("\n Saldo parcial:2.f", sldp); 
    
    printf("\n 2a retirada:$ "); 
    scanf("%f", &ret): 
    
    sldp = sldp + ret; 
    printf("\n Saldo parcial:$%2.f",sldp); 
    printf("\n 3a retirada:$ "); 
    scanf("%f", &ret); 
    
    sldp = sldp + ret; 
    printf("\n Saldo final $%2.f", sldp); 

    if sldp>1000{
      printf("Parabens voce e economico")
        }
    else{
        printf("Voce esta gastando muito")
          }
    return 0;
  }
