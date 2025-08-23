#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int n1, n2, soma;
    printf("Informe o primeiro numero");
    scanf("%d", &n1);
    printf("Informe o segundo numero");
    scanf("%d", &n2);
    soma = n1 + n2;
    if(soma >10) {
        printf("soma é: %d", soma);

    }else{
printf("hhhhhhhh");
}
*/

/* Ordem Decrescente
int n1, n2;
    printf("Informe o primeiro numero:  ");
    scanf("%d", &n1);
    printf("Informe o segundo numero:  ");
    scanf("%d", &n2);
    if(n1 < n2){
        printf("%d %d", n2, n1);
    }else{
    printf("%d %d", n1, n2);
    }
*/

/*
int n;
printf("Informe um Numero: \n");
scanf("%d", &n);
if(n > 0){
    printf("numero positivo!");
}
else if(n == 0){
printf("Numero Nulo!");
}else {
printf("Numero Negativo!");
}
*/

/*
int n1, n2;
    printf("Informe o primeiro numero:  ");
    scanf("%d", &n1);
    printf("Informe o segundo numero:  ");
    scanf("%d", &n2);
    if(n1 % 2 == 0 && n2 % 2 == 0){
    printf("numero e par!");
}
    else if(n1 % 2 == 0 ){
            printf("O primeiro numero é par!!!!");

    }
    else if(n2 % 2 == 0) {
    printf("O segundo Numero é par!");
}
    else{
    printf("Ambos os numeros são Impares!");
}
*/

    char sexo;
    double altura, peso;
printf("Informe o Sexo:");
scanf("%c", &sexo);
printf("Informe a Altura:");
scanf("%lf", &altura);
if(sexo == 'm' || sexo == 'M'){
    peso = (72.7 * altura) - 58;
    printf("Peso Ideal: %.2lf\n", peso);
}
else if(sexo == 'f' || sexo == 'F'){
    peso = (62.1 * altura) - 44.7;
    printf("Peso Ideal: %.2lf\n", peso);
}
else {
printf("Opção Invalida!");
}











    return 0;
}
