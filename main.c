#include <stdio.h>

int main(){
    int num, i, contador;
    
    contador = 0;
    
    printf("Digite o número: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            contador++; //contador++ = contador +1;
        }
    }
    if(contador == 2){
        printf("O número %d é primo", num);
    }
    else{
        printf("O número %d não é primo", num);
    }
  }