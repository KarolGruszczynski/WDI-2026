#include <stdio.h>

int main() {
	char tekst[1000];
	printf("Podaj tekst: ");
	scanf("%999s", tekst);
	int i = 0; int j;
	int a = 0;
	while (tekst[i] != '\0') {
		if (('0' <= tekst[i] && tekst[i] <= '9') == 0) {
			printf("Tekst nie jest liczba calkowita");
			return 0;
		}
		i++;
	}
	int wynik = 0;
	int dziesiec = 1;
	for (i = i - 1; i > -1; i--) {
		wynik = wynik + ((tekst[i] - '0') * dziesiec);
		dziesiec = dziesiec * 10;
		}
	printf("Liczba wynosi: %d", wynik);
	
	return 0;
}
