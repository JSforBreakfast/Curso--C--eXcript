#include <stdio.h>
#include <stdlib.h>

int main() {

int x = 0;
int valDig = 0;

printf("Informe quantas vezes quer repetir a instrução: \n");

scanf("%i", &valDig);

while (x < valDig) {

printf("%i\n", x * 10);

x = x + 1;

}

return 0;
}
