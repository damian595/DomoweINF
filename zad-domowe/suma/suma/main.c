#include <stdio.h>
#include "operations.h"

int main() {
    int a, b;

    // Pobranie liczb od u¿ytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf_s("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf_s("%d", &b);

    // Wywo³anie funkcji dodaj¹cej
    int result = add(a, b);

    // Wyœwietlenie wyniku
    printf("Suma %d + %d = %d\n", a, b, result);

    return 0;
}