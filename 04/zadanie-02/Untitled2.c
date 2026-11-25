#include <stdio.h>
#include <ctype.h>
//wypisanie imienia uzywajac biblioteki
void imie1(char slowo[])	{
	int i;
	if (slowo[0] != '\0') {
		slowo[0] = toupper((unsigned char)slowo[0]);
	}
	for (i = 1; slowo[i] != '\0'; i++) {
		slowo[i] = tolower((unsigned char)slowo[i]);
	}
	printf("Wypisanie imienia uzywajac biblioteki: \n");
	i = 0;
	while (slowo[i] != '\0') {
		printf("%c", slowo[i]);
		i++;
	}
	printf("\n");
}
void imie2(char slowo[]) {
	int i;
	if ('a' <= slowo[0] && slowo[0] <= 'z') {
		slowo[0] = slowo[0] - 32;
	}
	for (i = 1; slowo[i] != '\0'; i++) {
		if ((slowo[i] != '\0') && ('A' <= slowo[i] && slowo[i] <= 'Z')){
			slowo[i] = slowo[i] + 32;}
	}
	printf("Wypisanie imienia nie uzywajac biblioteki: \n");
	i = 0;
	while (slowo[i] != '\0') {
		printf("%c", slowo[i]);
		i++;
	}
	printf("\n");
}
int main() {
	int i;
	char imie[50];
	char zapasoweimie[50];
	printf("Napisz swoje imie: ");
	scanf("%49s", imie);
	for (i = 0; i < 50; i++) {
		zapasoweimie[i] = imie[i];
	}
	imie1(imie);
	imie2(zapasoweimie);
	return 0;
}

