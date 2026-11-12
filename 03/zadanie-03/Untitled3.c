#include <stdio.h>
double ceiling(double n) {
	int m = (int)n;
	if (n > 0) {
	return m + 1;
	}
	return m;
}
double floor(double n) {
	int m = (int)n;
	if (n > 0) {
	return m;
	}
	return m - 1;
}
double round(double n) {
	if (n>=0) {
		return n + 0.5;
	}
	else {
		return n - 0.5;
	}
}
int main() {
	double k;
	int spr;
	int wynik;
	printf("Podaj liczbe n: ");
	scanf(" %lf", &k);
	spr = (int)k;
	if (k == spr) {
		printf("Wynikiem funkcji ceiling jest: %d\n", spr);
		printf("Wynikiem funkcji floor jest: %d\n", spr);
		printf("Wynikiem funkcji round jest: %d\n", spr);
	}
	else {
	wynik = (int)ceiling(k);
	printf("Wynikiem funkcji ceiling jest: %d\n", wynik);
	wynik = (int)floor(k);
	printf("Wynikiem funkcji floor jest: %d\n", wynik);
	wynik = (int)round(k);
	printf("Wynikiem funkcji round jest: %d\n", wynik);
	}	

	return 0;
}
