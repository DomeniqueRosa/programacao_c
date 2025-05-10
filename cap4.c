#include <stdio.h>
// prototipo da funcao fat
int fat(int n);

// funcao principal
int main(){
    int n, r;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    r = fat(n);
    printf("Fatorial de %d = %d\n", n, r);
    return 0;
}
 
int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fat(n - 1);
    }
}
