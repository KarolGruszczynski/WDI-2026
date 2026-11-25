#include <stdio.h>
void szyfruj(char tekst[], int klucz) {
	int i;
	klucz = klucz % 26;
	for (i = 0; tekst[i] != '\0'; i++) {
		if (tekst[i] == ' ') {
		}
		else {
		tekst[i] += klucz;
		if ((tekst[i] - klucz) < 91) {
			if (tekst[i] > 90){
			tekst[i] -= 26;	
			}
		}
		else {
			if (tekst[i] > 122){
			tekst[i] -= 26;	
			}
		}
		}
	}
	printf("Zaszyfrowany tekst to: \n");
	for (i = 0; tekst[i] != '\0'; i++) {
		printf("%c", tekst[i]);
	}
	printf("\n");
}

void odszyfruj(char tekst[], int klucz) {
	int i;
	klucz = klucz % 26;
	for (i = 0; tekst[i] != '\0'; i++) {
		if (tekst[i] == ' ') {
		}
		else {
		tekst[i] -= klucz;
		if ((tekst[i] + klucz) < 91) {
			if (tekst[i] < 65){
			tekst[i] += 26;	
			}
		}
		else {
			if (tekst[i] < 97){
			tekst[i] += 26;	
			}
		}
		}
	}
	printf("Odszyfrowany tekst to: \n");
	for (i = 0; tekst[i] != '\0'; i++) {
		printf("%c", tekst[i]);
	}
	printf("\n");
}

int main() {
	char znak;
	char metoda;
	char tekst[1000];
	int klucz;
	
	while (1) {
		printf(" ====== MENU GLOWNE ====== \n");
		printf("Wybierz: \n - Szyfrowanie podstawowe (p) \n - Szyfrowanie z wybieraniem klucza (z)\n - Exit (e)\n");
		scanf(" %c", &metoda);
		switch(metoda) {
			case 'p':
					printf("===== Menu =====\n");
					printf("Wybierz: \n - Szyfrowanie (s) \n - Deszyfrowanie (d)\n");
					scanf(" %c", &znak);
					switch(znak) {
						case 's':
							printf("Podaj tekst do zaszyfrowania: \n");
							scanf(" %999[^\n]", tekst);
							szyfruj(tekst, 3);
							break;
						case 'd':
							printf("Podaj tekst do odszyfrowania: \n");
							scanf(" %999[^\n]", tekst);
							odszyfruj(tekst, 3);
							break;
						default: 
							printf("Niepoprawny znak!");
					}
					break;
			case 'z':
					printf("===== Menu =====\n");
					printf("Wybierz: \n - Szyfrowanie (s) \n - Deszyfrowanie (d)\n");
					scanf(" %c", &znak);
					switch(znak) {
						case 's':
							printf("Podaj tekst do zaszyfrowania: \n");
							scanf(" %999[^\n]", tekst);
							printf("Podaj klucz szyfrowania: \n");
							scanf("%d", &klucz);
							szyfruj(tekst, klucz);
							break;
						case 'd':
							printf("Podaj tekst do odszyfrowania: \n");
							scanf(" %999[^\n]", tekst);
							printf("Podaj klucz szyfrowania: \n");
							scanf("%d", &klucz);
							odszyfruj(tekst, klucz);
							break;
						default: 
							printf("Niepoprawny znak!");
					}
					break;
			case 'e': 
				return 0;
			default: printf("Niepoprawny znak");
		}
	}
	return 0;
}
