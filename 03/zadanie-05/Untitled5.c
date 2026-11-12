#include <stdio.h>
void odpoczatku(int tablica[15]) {
	printf("I. od poczatku do konca listy \n");
	int i;
	//petla for
	printf("Petla for: \n");
	for (i = 0; i < 15; i++) {
		printf("%d\t", tablica[i]);
	}
	printf("\n");
	//petla while
	i = 0;
	printf("Petla while: \n");
	while (i < 15) {
		printf("%d\t", tablica[i]);
		i++;
	}
	printf("\n");
	//petla do while
	i = 0;
	printf("Petla dowhile: \n");
	do {
		printf("%d\t", tablica[i]);
		i++;
	} while (i < 15);
	printf("\n\n");
}
void odkonca(int tablica[20]) {
	printf("I. od konca do poczatku listy \n");
	int i;
	//petla for
	printf("Petla for: \n");
	for (i = 14; i > -1; i--) {
		printf("%d\t", tablica[i]);
	}
	printf("\n");
	//petla while
	i = 14;
	printf("Petla while: \n");
		while (i > -1) {
		printf("%d\t", tablica[i]);
		i--;
	}
	printf("\n");
	//petla do while
	i = 14;
	printf("Petla dowhile: \n");
	do {
		printf("%d\t", tablica[i]);
		i--;
	} while (i > -1);
	printf("\n\n");
}

int main() {
	int mojatablica[15];
	int i = 0;
	for (i = 0; i<15; i++) {
	mojatablica[i] = i*3;
}
	odpoczatku(mojatablica);
	odkonca(mojatablica);
	return 0;
}
