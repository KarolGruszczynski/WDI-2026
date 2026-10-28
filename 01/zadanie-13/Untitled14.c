#include <stdio.h>
int main() {
    int n;
    double liczba, suma = 0;
    float srednia = 0.0;
    int i;

    printf("Wprowadz ile liczb wprowadzisz: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Liczba n rowna sie 0!\n");
        scanf(" ");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%lf", &liczba);
        suma += liczba;
    }
	srednia = suma/n;

    printf("Suma liczb: %.2lf\n", suma);
    printf("Srednia liczb: %.2f\n", srednia);

	scanf(" ");
}
