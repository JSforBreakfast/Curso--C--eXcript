#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Digite um valor de 1 a 7\n");
    int i;
    scanf("\n\n%i", &i);

    switch(i) {

        case 1:
            printf("Gol da Alemanha! Thomas Muller!");
            break;
        case 2:
            printf("Klose!! Golaço da Alemanha!");
            break;
        case 3:
            printf("Toni Kroos! Gol da Alemanha!");
            break;
        case 4:
            printf("Olha o que ele fez!! Gooool... da Alemanha!");
            break;
        case 5:
            printf("Olha o Khedira! Gooool... da Alemanha!");
            break;
        case 6:
            printf("Gol da Alemanha!");
            break;
        case 7:
            printf("Olha o gol, olha o gol! Goooool! Schurrle e o nome dele!");
            break;
        case 8:
            printf("Goool! Eeeee do Brasil!!!");
            break;



        default:
            printf("Default");
    }





return 0;
}
