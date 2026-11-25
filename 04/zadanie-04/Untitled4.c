#include <stdio.h>

int dlugosc(char napis[]) {
	int i = 0;
	while (napis[i] != '\0') {
		i++;
	}
	return i;
}

int anagramy(char slowo[], char drugieslowo[], int i) {
	int m; int j;
	char Cyfra = 'A';
	char cyfra = 'a';
	int licznik1 = 0;
	int licznik2 = 0;
	if (dlugosc(drugieslowo) > i) {
		return 0;
	}
	for (m = 0; m < 26; m++) {
		for (j = 0; j < i; j++) {
			if ((slowo[j] == Cyfra) || (slowo[j] == cyfra)) {
			licznik1++;
			}
			if ((drugieslowo[j] == Cyfra) || (drugieslowo[j] == cyfra)) {
			licznik2++;
			}
		}
		if (licznik1 != licznik2) {
		return 0;
		}
		licznik1 = 0;
		licznik2 = 0;
		cyfra++;
		Cyfra++;
	}
	return 1;
}

int main() {
	char tekst1[1000];
	char tekst2[1000];
	printf("Podaj tekst pierwszy: ");
	scanf("%999s", tekst1);
	printf("Podaj tekst drugi: ");
	scanf("%999s", tekst2);
	
	if (anagramy(tekst1, tekst2, dlugosc(tekst1)) == 1) {
		printf("Podane wyrazy to anagramy");
	}
	else {
		printf("Podane wyrazy nie sa anagramami");
	}
	return 0;
}
