#include <stdio.h>
int main() {
    int n, maximum, minimum = 32767, suma, licznik, wynik = 0;
    float srednia = 0;
    char znak;
    char zmiana;

    while (wynik==0){
    maximum = -32767;
    minimum = 32767;
    wynik = 0;
    suma = 0;
    srednia = 0;
    licznik = 0;
    printf("Wybierz dzialanie (dla parzystej(p), dla nieparzystej(n), dla zera(o): ");
    scanf(" %c", &zmiana);
    
    switch(zmiana){
    	case 'p':
    		n = 1;
    		while (n % 2 != 0) {
    		printf("Podaj nowa liczbe: ");
    		scanf(" %d", &n);
    		licznik += 1;
    		if (n>maximum){
    			maximum = n;
			}
			if (n<minimum){
    			minimum = n;
			}
			suma += n;
			srednia += n;
			}
			srednia = srednia/licznik;
			printf("Najwieksza: %d\n", maximum);
			printf("Najmniejsza: %d\n", minimum);
			printf("Suma: %d\n", suma);
			printf("Srednia: %f\n", srednia);
			return 0;
    	case 'n':
    		n = 0;
    		while (n % 2 != 1) {
    		printf("Podaj nowa liczbe: ");
    		scanf(" %d", &n);
    		licznik += 1;
    		if (n>maximum){
    			maximum = n;
			}
			if (n<minimum){
    			minimum = n;
			}
			suma += n;
			srednia += n;
			}
			srednia = srednia/licznik;
			printf("Najwieksza: %d\n", maximum);
			printf("Najmniejsza: %d\n", minimum);
			printf("Suma: %d\n", suma);
			printf("Srednia: %f\n", srednia);
			return 0;
    	case 'o':
    		n = 1;
    		while (n != 0) {
    		printf("Podaj nowa liczbe: ");
    		scanf(" %d", &n);
    		licznik += 1;
    		if (n>maximum){
    			maximum = n;
			}
			if (n<minimum){
    			minimum = n;
			}
			suma += n;
			srednia += n;
			}
			srednia = srednia/licznik;
			printf("Najwieksza: %d\n", maximum);
			printf("Najmniejsza: %d\n", minimum);
			printf("Suma: %d\n", suma);
			printf("Srednia: %f\n", srednia);
			return 0;
    	default:
            printf("Niepoprawny znak.\n");
            break;
	}
}
}



