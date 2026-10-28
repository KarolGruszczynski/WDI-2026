#include <stdio.h>
int main() {
    int max, suma = 0;
    int i;
    
    printf("Podaj liczbe: ");
    scanf("%d", &max);

    for (i = 0; i < max; i++) {
        suma += i;
    }

    printf("Suma liczb naturalnych mniejszych od %d wynosi: %d\n", max, suma);
	scanf(" ");
}
