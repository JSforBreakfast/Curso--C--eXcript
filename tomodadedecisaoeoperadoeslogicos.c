#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i = 10;

    printf("Digite um número != de 5: \n") ;
    scanf( "%i", &i );

    if(i!=5)
    {
        printf("\nBoa resposta: \n");
        printf("Acertou miseravi!\n");

    }else{
        printf("\nBeleza... Só que não: \n");
        printf("Conte os dedos de uma mão e volte a tentar com algo diferente desse número\n");
    }

    /*
    1) positivo -> 1
    2) negativa -> 0
    */

    // == comparação positiva -> x == y
    // != comparação negativa -> x != y
    // !(x==y) O "!" é um sinal de negação quando colocado na frente das expressões

    return 0;
}
