#include <stdio.h>

int main() {
	char tekst[1000];
	printf("Podaj tekst: ");
	scanf("%999s", tekst);
	int i = 0; int j;
	while (tekst[i] != '\0') {
		i++;
	}
	int napis[i];
	for (j = 0; j < i; j++) {
		napis[j] = tekst[j];
	}
	
	int m;
	char Cyfra = 'A';
	char cyfra = 'a';
	int licznik = 0;
	for (m = 0; m < 26; m++) {
		for (j = 0; j < i; j++) {
			if ((napis[j] == Cyfra) || (napis[j] == cyfra)) {
			licznik++; }
		}
		if (licznik != 0) {
		printf("Cyfra %c pojawila sie %d razy \n", cyfra, licznik);
		}
		licznik = 0;
		cyfra++;
		Cyfra++;
	}
	
	return 0;
}
