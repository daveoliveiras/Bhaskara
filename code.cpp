#include <stdio.h>
#include <math.h>
#include <cmath>
#include <locale.h>

float a, b, c, delta, x1, x2;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\nEquação de segundo grau: ax² + bx + c = 0\n");
    printf("\nA, B e C podem ser negativos\n");
    printf("\nDigite o valor de 'A' da sua equação (não admite 0): ");
    scanf("%f", &a);

    printf("\nDigite o valor de 'B' da sua equação (admite 0): ");
    scanf("%f", &b);

    printf("\nDigite o valor de 'C' da sua equação: (admite 0): ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) // números complexos
        printf("\nO gráfico não apresenta pontos em X!\n");

    if (delta == 0) // uma raiz
        printf("\nO gráfico apresenta um ponto em X: %.2f\n", -b / (2 * a));

    if (delta > 0) // duas raízes
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nO gráfico apresenta dois pontos em X: %.2f e %.2f\n", x1, x2);
    }
    return 0;
}