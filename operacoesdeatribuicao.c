#include <stdio.h>
#include <stdlib.h>

int main (){

    int x = 1;
    //x = x + 1;
    //x += 1;

    while (x <= 7){

        printf("Gol da Alemanha!\n");

        x += 1;
    }

    int i = 50;

    printf("soma: %i\n", i += 100);
    printf("subtracao: %i\n", i -= 50);
    printf("multiplicacao: %i\n", i *= 3);
    printf("divisao: %i\n", i /= 3);
    printf("resto: %i\n", i %= 100);


    return 0;
}

/*

1) += -> soma
2) -= -> subtração
3) *= -> multiplicação
4) /= -> divisão
5) %= -> resto da divisão

*/
