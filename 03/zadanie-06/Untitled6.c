#include <stdio.h>
void srednia(int tabliczka[5]) {
	int i;
	float srednia;
	for (i = 0; i < 5; i++) {
		srednia += tabliczka[i];
	}
	srednia = srednia/5;
	printf("Srednia wynosi %.2f\n", srednia);
	printf("Liczby wieksze od sredniej liczb w tablicy: ");
	for (i = 0; i < 5; i++) {
		if (tabliczka[i] > srednia){
			printf("%d\t", tabliczka[i]);
		}
	}
}
int main() {
	int i;
	int tablica[5];
	for (i = 0; i < 5; i++) {
		printf("Podaj %d liczbe:  ", i+1);
		scanf("%d", &tablica[i]);
	}
	srednia(tablica);
	return 0;
}
