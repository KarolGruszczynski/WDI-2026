#include <stdio.h>
int srednia(int tabliczka[10]) {
	int i;
	float srednia;
	for (i = 0; i < 10; i++) {
		srednia += tabliczka[i];
	}
	srednia = srednia/10;
	printf("Srednia wynosi %.2f\n", srednia);
	return 0;
}
int wieksze(int tabliczka[10]) {
	int i;
	float srednia;
	for (i = 0; i < 10; i++) {
		srednia += tabliczka[i];
	}
	srednia = srednia/10;
	printf("Liczby wieksze od sredniej liczb w tablicy: ");
	for (i = 0; i < 10; i++) {
		if (tabliczka[i] > srednia){
			printf("%d\t", tabliczka[i]);
		}
	}
	printf("\n");
	return 0;
}
int maxmin(int tabliczka[10]) {
	int i;
	int min = tabliczka[0], max = tabliczka[0];
	for (i = 0; i < 10; i++) {
		if (min > tabliczka[i]){
			min = tabliczka[i];
		}
		if (max < tabliczka[i]){
			max = tabliczka[i];
		}
	}
	printf("Najmniejsza liczba w tablicy to %d\n", min);
	printf("Najwieksza liczba w tablicy to %d\n", max);
	return 0;
}
int sumowanie(int tabliczka[10]) {
	int i;
	int suma = 0;
	for (i = 0; i < 10; i++) {
		if (tabliczka[i] % 2 == 1){
			suma += tabliczka[i];
		}
	}
	printf("Suma liczb nieparzystych wynosi %d\n", suma);
	return 0;
}
int wypisywanie_odwrotne(int tabliczka[10]) {
	int i;
	printf("Tablica wypisana od ostatniego elementu: \n");
	for (i = 9; i > -1; i--) {
		printf("%d\t", tabliczka[i]);
	}
	return 0;
}

int main() {
	int i;
	int tablica[10];
	for (i = 0; i < 10; i++) {
		printf("Podaj %d liczbe:  ", i+1);
		scanf("%d", &tablica[i]);
	}
	srednia(tablica);
	wieksze(tablica);
	maxmin(tablica);
	sumowanie(tablica);
	wypisywanie_odwrotne(tablica);
	return 0;
}
