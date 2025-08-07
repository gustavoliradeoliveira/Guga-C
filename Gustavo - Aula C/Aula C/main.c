#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int num1;
    int num2;
    double media;
printf("Informe o primeiro Numero:");
    scanf("%d", &num1);


    printf("Informe o segundo Numero:");
        scanf("%d", &num2);

        media = (num1 + num2) / 2;

        printf("A media eh: %.2lf\n", media);

*/

/*
Numero ao Quadrado
    int num1;
    int quadrado;
    printf("Informe um Numero:");
        scanf("%d", &num1);
        quadrado = num1 * num1;
        printf("O quadrado do Numero eh: %d\n", quadrado);
*/
/*Reajuste |Salarial

    double salario, novoSalario, reajuste;

    printf("Informe o Salario:");
        scanf("%lf", &salario);
            reajuste = salario/100;
        novoSalario = salario + reajuste;
    printf("Novo salario: %.2lf\n", novoSalario);
*/

/*
Desconto
double salario, novoSalario, reajuste;

    printf("Informe o Salario:");
        scanf("%lf", &salario);
            reajuste = salario/100;
        novoSalario = salario - reajuste;
    printf("Novo salario: %.2lf\n", novoSalario);
*/
/*
double preco, desconto, novoPreco;

    printf("Informe o valor do Product:");
        scanf("%lf", &preco);
            Desconto = preco/100 ;
        novoSalario = salario - reajuste;
    printf("Novo salario: %.2lf\n", novoSalario);
    */


/*
    char v1, v2, v3;
    printf("Informe o Primeiro Caracter:");
    scanf("%c", &v1);

    printf("informe o segundo caracter:");
    scanf(" %c", &v2);

    printf("informe o terceio caracter:");
    scanf(" %c", &v3);

    printf("%c, %c, %c\n", v1, v2, v3);
    */

    /*
    int a, b, c, x;
    printf("Informe o Primeiro Caracter:");
    scanf("%d", &a);

    printf("informe o segundo caracter:");
    scanf(" %d", &b);

    printf("informe o terceio caracter:");
    scanf(" %d", &c);

    x = 2*((a - c)/8)-b*5;

    printf("Valor de x: %d\n", x);
*/

int a, b, x, v, h, j;
    printf("Informe o Primeiro Caracter:");
    scanf("%d", &a);

    printf("informe o segundo caracter:");
    scanf(" %d", &b);

    x = a*b;
    v = a/b;
    h = a+b;
    j = a-b;

     printf("Multiplicação : %d\n Divisão: %d\n Soma: %d\n Subtração: %d\n", x,v,h,j);


    return 0;
}
