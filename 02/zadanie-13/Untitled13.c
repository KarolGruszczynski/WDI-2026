#include <stdio.h>

int main() {
	int n;
	int w = 1;
	int i;
	int poprzednia = 1;
	int jeszczepoprzednia = 0;
	printf("Podaj liczbe do ciagu Fibonacciego: ");
	scanf(" %d", &n);
	if (n == 2) {
		printf("Dla tej liczby ciag wynosi: 1");
		return 0;
	}
	if (n == 1) {
		printf("Dla tej liczby ciag wynosi: 1");
		return 0;
	}
	if (n == 0) {
		printf("Dla tej liczby ciag wynosi: 0");
		return 0;
	}
	for (i = 1; i < n; i++){
		w = jeszczepoprzednia + poprzednia;
		jeszczepoprzednia = poprzednia;
		poprzednia = w;
	}
	printf("Dla tej liczby ciag wynosi: %d", w);
return 0;
}
