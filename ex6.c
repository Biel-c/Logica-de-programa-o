include <stdio.h>
include <stdlib.h> 
    
int main() 
{
    float a,b,op;
    char operador;
    printf("\n Digite 2 valores e 1 operador entre eles (+,-,*,/): ");
    scanf("%f %c %f", &a, &operador, &b);
    
    if (operador == '+'){ 
        op = a + b; 
        printf("\n Seu resuldato %.1f", op);
    }
    
    else if (operador == '-'){
        op = a - b;
        printf("\n Seu resultado = %.1f", op);
    }
    
    else if (operador == '*'){ 
        op = a * b;
        printf("\n Seu resultado = %.1f", op);
    }
    
    else if (operador == '/'){ 
        op = a / b;
        printf("\n Seu resultado = %.2f", op);
    } 
    else {
    printf("\n Digite um numero valido"); 
    } 
    
    return 0;
}