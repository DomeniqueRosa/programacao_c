#include <stdio.h>

float converte(float c){
    float f;
    f = 1.8*c + 32;
    return f;
}

int main(void){
    float t1,t2;
    printf("Digite a temperatura em Celsius: ");
    // captura valor teclado
    scanf("%f", &t1);

    t2 = converte(t1);

    printf("Temperatura em Fahrenheit: %.2f\n", t2);
    return 0;
}