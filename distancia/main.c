#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, distancia;

    printf("Digite a coordenada x de A: ");
    scanf("%lf", &x1);
    printf("Digite a coordenada y de A: ");
    scanf("%lf", &y1);
    printf("Digite a coordenada x de B: ");
    scanf("%lf", &x2);
    printf("Digite a coordenada y de B: ");
    scanf("%lf", &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("A distância entre A(%.2lf, %.2lf) e B(%.2lf, %.2lf) é %.2lf\n", x1, y1, x2, y2, distancia);

    return 0;
}
