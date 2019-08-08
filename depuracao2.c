#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

printf("Digite o número 1: \n");

char c;

c = getchar();


if (c == '1'){

    printf("\ncorreto.\n");

}else{
    printf("\ninválido.\n");
    printf("caractere digitado >%c<. \n", c);
}

return 0;
}
