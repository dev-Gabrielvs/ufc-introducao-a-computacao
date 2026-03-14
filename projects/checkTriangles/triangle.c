#include <stdio.h>

int isValidInput(int lado)
{
    if (lado != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isTriangle(int l1, int l2, int l3)
{
    if ((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char *triangleType(int l1, int l2, int l3)
{
    if (l1 == l2 && l2 == l3)
    {
        return "Equilátero";
    }
    else if (l1 != l2 && l2 != l3 && l1 != l3)
    {
        return "Escaleno";
    }
    else
    {
        return "Isósceles";
    }
}

int main(void)
{
    int lado1, lado2, lado3;
    do
    {
        printf("Digite lado 1:\n");
        scanf("%d", &lado1);
    } while (!isValidInput(lado1));

    do
    {
        printf("Digite lado 2:\n");
        scanf("%d", &lado2);
    } while (!isValidInput(lado2));

    do
    {
        printf("Digite lado 3:\n");
        scanf("%d", &lado3);
    } while (!isValidInput(lado3));

    if (isTriangle(lado1, lado2, lado3))
    {
        printf("O tipo de triângulo é: \n%s\n", triangleType(lado1, lado2, lado3));
    }
    else
    {
        printf("Não é um triângulo\n");
    }
    return 0;
}