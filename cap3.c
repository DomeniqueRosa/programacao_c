#include <stdio.h>

int main(){
    int n = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    // verifica se o numero eh par ou impar
    // se o resto da divisao por 2 for 0, eh par
    // se o resto da divisao por 2 for 1, eh impar
    // o operador % retorna o resto da divisao
    // o operador % tem precedencia maior que o operador ==
    if(n % 2 == 0){
        printf("O numero %d eh par\n", n);
    } else { 
        printf("O numero %d eh impar\n", n);
    }
}