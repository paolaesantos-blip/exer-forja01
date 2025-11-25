//inclui a biblioteca studio.h, permite o uso de entrada 
//saida de valores como o print
#include<stdio.h>
//inclui a biblioteca stdlib.h 
//a funcoes utilitarias como o system
#include<stdlib.h>


//inicio da função, onde o programa começa a ser executado
int main(){

    float num1 = 100.45;
    int num2 = 200;

    //printar os numeros das variaveis
    printf("%f %d", num1, num2);
    //pausa o programa, até q o usuário pressione qualquer tecla 
    system("pause");
    //finaliza o programa retornando 0, indicando que deu tudo certo 
    return 0;
}



