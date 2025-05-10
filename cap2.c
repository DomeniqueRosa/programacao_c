#include <stdio.h>

int main(void){

    int a,b = 0;
    float c = 0.0;

    printf("a: %d, b: %d, c:%f/n", a,b,c);
    printf("tamanho dos tipos: %zu, %zu, %zu\n", sizeof(a), sizeof(b), sizeof(c)); 
    return 0;
}