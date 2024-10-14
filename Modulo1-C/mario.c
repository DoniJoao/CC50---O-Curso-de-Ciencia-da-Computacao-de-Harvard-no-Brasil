#include <stdio.h>

int main()
{

    int numero;

    do
    {
        printf("Entre 1 e 8, qual altura da pirâmide deseja?\n");
        scanf("%d", &numero);

        // Se o valor for inválido, avisa o usuário
        if (numero < 1 || numero > 8)
        {
            printf("Insira um número válido entre 1 e 8.\n");
        }
    }
    while (numero < 1 || numero > 8); // Continua enquanto o número for inválido

    printf("Altura Valida: %d\n", numero);

    for (int i = 1; i <= numero; i++)
    {
        // Imprimir os espaços à esquerda (pirâmide alinhada à direita)
        for (int j = 0; j < numero - i; j++)
        {
            printf(" ");
        }

        // Imprimir os #
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Pular para a próxima linha
        printf("\n");
    }

    return 0;
}
