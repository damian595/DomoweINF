#include <stdio.h>
#include "operations.h"

int main() {
    int a, b;

    // Pobranie liczb od użytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf_s("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf_s("%d", &b);

    // Wywołanie funkcji dodającej
    int result = add(a, b);

    // Wyświetlenie wyniku
    printf("Suma %d + %d = %d\n", a, b, result);

    return 0;
}