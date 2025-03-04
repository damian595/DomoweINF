#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    // Pobranie wspó³czynników od u¿ytkownika
    printf("Podaj wspolczynnik a: ");
    scanf_s("%lf", &a);

    printf("Podaj wspolczynnik b: ");
    scanf_s("%lf", &b);

    printf("Podaj wspolczynnik c: ");
    scanf_s("%lf", &c);

    // Obliczenie delty
    delta = b * b - 4 * a * c;

    // Sprawdzenie liczby pierwiastków
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Rownanie ma dwa pierwiastki: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Rownanie ma jeden pierwiastek: x = %.2f\n", x1);
    }
    else {
        printf("Brak pierwiastkow rzeczywistych (delta < 0)\n");
    }

    return 0;
}