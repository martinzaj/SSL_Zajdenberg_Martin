#include <stdio.h>

int main() {
    printf("Hola Mundo\n");
    char nombre[20];
    printf("Por favor, introduce tu nombre: ");
    scanf("%s", nombre);
    printf("Hola, %s! Bienvenido/a al mundo de la programacion en C.\n", nombre);
    return 0;
}