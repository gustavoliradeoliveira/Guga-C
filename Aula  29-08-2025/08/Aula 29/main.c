#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
    double n1, n2;
    char operacao;
    printf("Digite os dois Numeros:  ");
    scanf("%lf %lf", &n1, &n2);
    printf("Informe a Operação: +, -, *, /");
    scanf(" %c", &operacao);
    switch(operacao){
    case '+':{
    printf("Soma: %.lf\n", n1 + n2);
    break;
    }
    case '-':{
    printf("Subtração: %.lf\n", n1 - n2);
    break;
    }
    case '*':{
    printf("Multiplicação: %.lf\n", n1 * n2);
    break;
    }
    case '/':{
        if(n1 / n2 == 0){
            printf("Divisao por zero: \n");
        }else{
        printf("Divisao %.2lf", n1 / n2);
        }


    }
    default:{
    printf("opção invalida!\N");
    }
    }
    */

/*
    int n1;
    printf("Digite os dois Numeros:  ");
    scanf("%d", &n1);
    while(n1 <= 100000){
        printf("%d\t", n1);
        n1++;
    }
*/



/*

 int n1, fat = 1;
    printf("Digite um Numero:  ");
    scanf("%d", &n1);
    while(n1    '' >=1){
        fat *= n1;
        n1--;
    }
    printf("Fatorial: %d", fat);

    return 0;
}
*/


    int cont = 1, num, maior = 0, menor = 0;
    printf("Informe o 1° numero :", cont);
        scanf("%d", &num);
        maior = num;
        menor = num;
    while(cont <= 15){
        printf("Informe o %d° numero :", cont);
        scanf("%d", &num);
           if(num > maior){
        maior = num;
        }else if(num < menor){
        menor = num;
        }
        cont++;

    }
    printf("O maior é %d\nMenor: %d\n", maior, menor);



    return 0;
}
