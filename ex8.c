#include <stdio.h> 
#include <stdlib.h> 

int main() 
{
    int cod;
    printf("\n Digite o codigo do produto para saber sua origem: ");
    scanf("%d", &cod); 
    
    if (cod == 0) { 
        printf("\n Digise un numero acima de o"); 
    }
    else if (0<=cod && cod<=20) {
        printf("\n Seu produto e da Europa"); 
    }
    
    else if (20<=cod && cod<=40) { 
        printf("\n Seu produto e da Asia"); 
    }
    
    else if (40<=cod && cod<=60) { 
        printf("\n Seu produto e da America"); 
    }
    
    else if (60<=cod && cod<=80) { 
        printf("\n Seu produto e de Africa"); 
    }
    
    else if (80<cod) {
        printf("\n Seu produto e do Paraguai");
    }
    
    else { 
        printf("\n Digite um numero valido");
    }
    
    return 0;
}