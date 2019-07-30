#include<stdio.h>
#include<stdlib.h>

int main()
{

int num1, num2, soma, subt, multi, div;

printf("Calculadora 1.0\n");
printf("Digite os 2 numeros a serem processados.");
scanf("%i\n%i\n", &num1, &num2);

soma = num1 + num2;

subt = num1 - num2;

multi = num1 * num2;

div = num1 / num2;

printf("A soma e: %i\n", soma);
printf("A subtracao e: %i\n", subt);
printf("O produto e: %i\n", multi);
printf("A divisao e: %i\n", div);

return 0;
}
