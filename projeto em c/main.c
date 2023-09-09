#include <stdio.h>

int main()
{

    float precos[12];

    float inflacaototal = 0.0;

    printf("Informe os preços da mercadoria ao longo de 12 meses:\n");

    for (int i = 0; i < 12; i++)

    {
        printf("Mês %d: R$ ", i + 1);

        scanf("%f", &precos[i]);
    }

    for (int i = 1; i < 12; i++)

    {
        float inflacao = ((precos[i] - precos[i - 1]) / precos[i - 1]) * 100;

        inflacaototal += inflacao;
    }
    printf("A inflação total no período de 12 meses é: %.2f%%\n", inflacaototal);

    return 0;
}
