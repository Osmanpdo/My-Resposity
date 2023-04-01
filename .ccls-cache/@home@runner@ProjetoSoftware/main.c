#include <stdio.h>
#include "calculo.h"
#include "print.h"

int main(void) {
    int n1, n2;
    menu();
    scanf("%d", &n1);

    menu();
    scanf("%d", &n2);

    printf("A soma de %d e %d = %d\n", n1, n2, soma(n1, n2));
    printf("A subtração de %d e %d é %d", n1, n2, subtracao(n1, n2));
    return 0;
}