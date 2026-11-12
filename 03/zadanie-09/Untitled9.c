#include <stdio.h>
int bubble_sort(int tabliczka[10]) {
	int i, j, a;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9; j++){
			if (tabliczka[j + 1] < tabliczka[j]) {
				a = tabliczka[j];
				tabliczka[j] = tabliczka[j + 1];
				tabliczka[j + 1] = a;
			}
			
		}
	}
	//wypisanie ulozonej tablicy tablicy
	printf("Tablica wypisana od pierwszego elementu: \n");
	for (i = 0; i < 10; i++) {
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
	bubble_sort(tablica);
	
	return 0;
}
