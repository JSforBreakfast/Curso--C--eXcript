#include <stdio.h>
#include <stdlib.h>




int main () {

    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade = 0;

    printf("\nDigite a idade de uma pessoa: \n");
    scanf("%i", &idade);

    if (idade <= iJ){

        printf("\nDiga meu jovem!\n");
    }else{
        if (idade >= iI){
            printf("\nDiga meu nobre!\n");
            }else{
                    if((idade > iJ)&&(idade < iI)){

                      printf("\nDiga meu rei!\n");
                }
            }
        }
return 0;
}
