#include <stdio.h>

int main() {

    char operacao;
    double num, num2;

    printf("Digite a operacao que voc deseja (+, -, , /): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num);

    printf("Agora o segundo numero: ");
    scanf("%lf", &num2);

    switch (operacao) {

        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num, num2, num+num2);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num, num2, num-num2);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num, num2, num*num2);
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", num, num2, num/num2);
            break;

        default:
            printf("Operacaoo invalida.\n");
            break;
    }

    return 0;
}
