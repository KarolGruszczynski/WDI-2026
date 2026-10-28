#include <stdio.h>
int main() {
    double a, b, wynik;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &a);

    printf("Podaj druga liczbe: ");
    scanf("%lf", &b);
    
    printf("Podaj znak dzialania (+, -, *, /, %%): ");
    scanf(" %c", &znak);

    switch(znak) {
        case '+':
            wynik = a + b;
            printf("Wynik: %.2lf\n", wynik);
            break;
        case '-':
            wynik = a - b;
            printf("Wynik: %.2lf\n", wynik);
            break;
        case '*':
            wynik = a * b;
            printf("Wynik: %.2lf\n", wynik);
            break;
        case '/':
            if (b == 0) {
                printf("Nie mozna dzielic przez zero!\n");
            } else {
                wynik = a / b;
                printf("Wynik: %.2lf\n", wynik);
            }
            break;
        case '%':
            if ((int)b == 0) {
                printf("Nie mozna dzielic przez zero!\n");
            } else {
                int resztka = (int)a % (int)b;
                printf("Wynik (reszta): %d\n", resztka);
            }
            break;
        default:
            printf("Niepoprawny znak.\n");
    }

    scanf(" ");
}
