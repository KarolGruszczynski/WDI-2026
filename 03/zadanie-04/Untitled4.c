#include <stdio.h>
int suma_cyfr(int liczba) {
	int temp = 0;
	if (liczba == 0) {
		return liczba;
	}
	temp = liczba % 10;
	return temp + suma_cyfr(liczba / 10);
}
int main() {
	int n, wynik = 0;
	printf("Wprowadz liczbe: ");
	scanf("%d", &n);
	wynik = suma_cyfr(n);
	if (n < 0) {
		printf("Podano bledna liczbe! ");
	}
	else {
	printf("Suma cyfr tej liczby wynosi: %d", wynik);
	}
}
