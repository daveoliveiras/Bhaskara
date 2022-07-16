#include <stdio.h>
#include <math.h>
#include <cmath>
#include <locale.h>

float a, b, c, delta, x1, x2;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\nEqua��o de segundo grau: ax� + bx + c = 0\n");
    printf("\nA, B e C podem ser negativos\n");
    printf("\nDigite o valor de 'A' da sua equa��o (n�o admite 0): ");
    scanf("%f", &a);

    printf("\nDigite o valor de 'B' da sua equa��o (admite 0): ");
    scanf("%f", &b);

    printf("\nDigite o valor de 'C' da sua equa��o: (admite 0): ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) // n�meros complexos
        printf("\nO gr�fico n�o apresenta pontos em X!\n");

    if (delta == 0) // uma raiz
        printf("\nO gr�fico apresenta um ponto em X: %.2f\n", -b / (2 * a));

    if (delta > 0) // duas ra�zes
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nO gr�fico apresenta dois pontos em X: %.2f e %.2f\n", x1, x2);
    }
    return 0;
}