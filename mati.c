#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;

    int subtrasao = a - b;
    int soma = a + b;
    int mutiplicacao = a * b;
    float divicao = a / b;

    printf ("Soma = %d \n", soma);
    printf ("Subitração = %d \n", subtrasao);
    printf ("Mutiplicação = %d \n", mutiplicacao);
    printf ("Divição = %f \n", divicao);

    long int compara1 = soma > mutiplicacao;
    unsigned int compara2 = soma < mutiplicacao;
    long long int compara3 = soma >= mutiplicacao;
    long double compara4 = soma <= mutiplicacao;
    unsigned long int compara5 = soma == mutiplicacao;
    short int compara6 = soma != mutiplicacao;
 
    printf (" %ld \n %u \n %lld \n %lf \n %lu \n %d \n ",compara1, compara2, compara3, compara4, compara5, compara6);

    return 0;
}