#include <stdio.h>
#include <stdlib.h>

int main ()

{

    float nota1, nota2, nota3, nota4, media;

    nota1 = nota2 = nota3 = nota4 = media;

    printf("\t\t\t\tMedia escolar 1.0\n\n");
    printf("Digite a sua primeira nota bimestral: ");
    scanf("%f", &nota1);
    printf("Digite a sua primeira nota bimestral: ");
    scanf("%f", &nota2);
    printf("Digite a sua primeira nota bimestral: ");
    scanf("%f", &nota3);
    printf("Digite a sua primeira nota bimestral: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A sua media escolar foi de: %f", media);

    if (media >= 7){

        printf("\nPassou miseravi!");

    }else{

        printf("\nNão foi desta vez jovem jedi...");

    }

return 0;

}
