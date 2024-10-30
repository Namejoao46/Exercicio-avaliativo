#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL,"PORTUGUESE");
    int valorInicial, valorFinal;
    int valorIicial2, valorFinal2;
    int calculo;


    printf("Digite o valor inicial da estura externa: ");
    scanf("%d", &valorInicial);
    printf("Digite o valor final da estrutura externa: ");
    scanf("%d", &valorFinal);
    printf("Digite o valor inicial da estrutura interna: ");
    scanf("%d", &valorIicial2);
    printf("Digite o valor final da estrutura interna: ");
    scanf("%d", &valorFinal2);


    for (int n1 = valorInicial; n1 <= valorFinal; n1++) {

        for (int n2 = valorIicial2; n2 <= valorFinal2; n2++){
            calculo = (n1 * n2) + n2;

        }
    }


    printf("O resultado do somatório é: %d\n", calculo);

    return 0;
}

