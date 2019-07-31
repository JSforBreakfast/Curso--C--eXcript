#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

char c;
printf("Digite uma letra minuscula: ");
scanf("%c", &c);

if(c >= 'a'){

    printf("\nSegue a letra digitada na forma maiuscula: > %c < \n", toupper(c));

}

return 0;

}
