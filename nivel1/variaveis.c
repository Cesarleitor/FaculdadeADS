#include <stdio.h>

int main() {
    int idade; // Declarando uma variável inteira
    double altura; // Declarando uma variável de ponto flutuante
    char opcao; // Declarando uma variável de caractere
    char nome[50]; // Declarando um array de caracteres para o nome
    char cidade[20]; // Declarando um array de caracteres para a cidade

    printf("Digite a sua idade: ");
    scanf("%d", &idade); // Lendo um inteiro do usuário33
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%lf", &altura); // Lendo um número de ponto flutuante do usuário
    printf("A altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lendo uma string do usuário
    printf("Seu nome é: %s\n", nome);   
    
    printf("Digite o nome da sua Cidade: ");
    scanf("%s", cidade); // Lendo novamente uma string do usuário
    printf("Sua cidade é: %s\n", cidade);




    /*
    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);
    /*

    /*  
    %d: Formato para inteiros
    %e: Formato para números de ponto flutuante em notação científica  
    %c: Formato para caracteres
    %s: Formato para strings (arrays de caracteres) 
    %f: Formato para números de ponto flutuante em notação decimal
    %lf: Formato para números de ponto flutuante de precisão dupla (double)
    %i: Formato para inteiros (equivalente a %d)
    %u: Formato para inteiros sem sinal
    %x: Formato para inteiros em hexadecimal
    %o: Formato para inteiros em octal
    %p: Formato para ponteiros
    */

}