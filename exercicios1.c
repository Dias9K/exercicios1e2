#include <stdio.h>

int main()
{
    int opcao;

    printf("Esse codigo executara o codigo referente a lista de exercicios em C numero 1.\nPor favor, escolha qual codigo voce gostaria de executar: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
        int numint;
        printf("Digite um numero inteiro: ");
        scanf("%d", &numint);
        printf("Seu numero eh: %d\n", numint);
        break;
    }

    case 2:
    {
        float numreal;
        printf("Digite um numero real: ");
        scanf("%f", &numreal);
        printf("Seu numero eh: %f\n", numreal);
        break;
    }

    case 3:
    {
        int a, b, c, soma;
        printf("Digite 3 valores inteiros para que seja calculada a soma deles: \n");
        scanf("%d %d %d", &a, &b, &c);
        soma = a + b + c;
        printf("O resultado da soma dos 3 valores eh: %d\n", soma);
        break;
    }

    case 4:
    {
        float numeroquadro, quadrado;
        printf("Digite um numero real para que o seu quadrado seja calculado: ");
        scanf("%f", &numeroquadro);
        quadrado = numeroquadro * numeroquadro;
        printf("O quadrado do numero digitado eh: %.2f\n", quadrado);
        break;
    }

    case 5:
    {
        double numeroreal, quintaparte;

        printf("Digite um numero para que a sua quinta parte seja calculada: ");
        scanf("%lf", &numeroreal);
        quintaparte = numeroreal / 5.0;
        printf("A quinta parte do seu numero eh: %lf\n", quintaparte);
        break;
    }

    case 6:
    {
        float celsius, fahrenheit;
        printf("Digite uma temperatura em graus Celsius para que a mesma seja apresentada em graus Fahrenheit: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * (9.0 / 5.0) + 32.0;
        printf("A sua temperatura convertida em graus Fahrenheit eh: %g\n", fahrenheit);
        break;
    }

    case 7:
    {
        float celsius, fahrenheit;
        printf("Digite uma temperatura em graus Fahrenheit para que a mesma seja apresentada em graus Celsius: ");
        scanf("%f", &fahrenheit);
        celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
        printf("A sua temperatura convertida em graus Celsius eh: %g\n", celsius);
        break;
    }

    default:
        printf("Opcao invalida! O codigo ainda esta sendo escrito e as questoes resolvidas.\n");
        break;
    }

    return 0;
}