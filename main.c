#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()
{
    /* Menu multifuncional */
    float quadrada,raiz,multiplicacao,divisao,soma,subtracao,num1,num2;
    int menu;
    setlocale (LC_ALL, "Portuguese");
    printf("O Menu multi-funcional foi iniciado!!\n\n\n");

    printf ("1- Multiplicar\n");
    printf ("2- dividir\n");
    printf ("3- somar\n");
    printf ("4- subtrair\n");
    printf ("5- quadrado de um n�mero\n");
    printf ("6- raiz de um n�mero\n\n\n");

    printf ("Escolha uma das op��es: \n\n");
    scanf ("%d", &menu);

    if (menu == 1)
    {
        printf ("Digite o primero numero que deseja multiplicar: ");
        scanf ("%f", &num1);
        printf ("Digite o primero numero que deseja multiplicar: ");
        scanf ("%f", &num2);
        multiplicacao = (num1 * num2);
        printf ("O resultado �: %.1f", multiplicacao);
    }
    else
        if (menu == 2)
    {
     printf ("digite o numero do divisor: ");
     scanf ("%f", &num1);
     printf ("digite o numero do dividendo: ");
     scanf  ("%f", &num2);
     divisao = (num2/num1);
     printf ("O resultado �: %.1f", divisao);
    }
    else
        if (menu == 3)
    {
        printf ("digite o primerio numero da soma: ");
        scanf ("%f", &num1);
        printf ("digite o segundo numero da soma: ");
        scanf ("%f", &num2);
        soma = (num1 + num2);
        printf ("O resultado da soma �: %.1f", soma);
    }
    else
        if (menu == 4)
    {
        printf ("Digite o primero n�mero da subtra��o: ");
        scanf ("%f", &num1);
        printf ("Digite o segundo n�mero da subtra��o: ");
        scanf ("%f", &num2);
        subtracao = (num1 - num2);
        printf ("O resultado da subtra��o � : %.1f", subtracao);
    }
    else
        if (menu == 5)
    {
        printf ("Digite o seu n�mero: ");
        scanf ("%f",  &num1);
        quadrada = (num1 * num1);
        printf ("O quadrado do seu n�mero �: %.1f", quadrada);
    }
    else
        if (menu == 6)
    {
        printf ("Digite o n�mero que gostaria de saber a raiz: \n\n");
        scanf ("%f", &num1);

        raiz = sqrt (num1);

        printf ("O resultado da raiz quadrada de %.1f �: %.1f", num1,raiz);
    }
    else
        printf ("O N�MERO � INV�LIDO");
}
