#include <stdio.h>
#include <stdlib.h>

int main () {

    int valorA, valorB, valorC;

    printf("insira o valor A:\n");
    scanf("%d", &valorA);

    printf("insira o valor B:\n");
    scanf("%d", &valorB);

    printf("insira o valor C:\n");
    scanf("%d", &valorC);

    int soma = (valorA + valorB);

    if (soma < valorC) {
        printf("A + B < C:\n");
    }
    else {
    printf("A + B > C:\n");
    }

    system("pause");
    return 0;
}
