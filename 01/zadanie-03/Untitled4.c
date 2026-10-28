#include <stdio.h>
int main() {
	char litera;
	int liczba;
	
	printf("Podaj pierwsza litere imienia: ");
	scanf("%c", &litera);
	
	printf("Podaj swoj wiek: ");
	scanf("%d", &liczba);
	
	printf("Inicjal: %c, wiek: %d\n", litera, liczba);

	scanf(" ");
}
