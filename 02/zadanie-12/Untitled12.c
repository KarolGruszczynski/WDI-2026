#include <stdio.h>

int dodawanie() {
	int n;
	int w = 0;
	int i;
	int a = 0;
	printf("Podaj ile liczb wczytujesz: ");
	scanf(" %d", &n);
	printf("Liczby: \n");
	for (i = 0; i < n; i++){
		scanf(" %d", &a);
		w += a;
	}
	return w;
}

int odejmowanie() {
	int w = 0;
	int a = 1;
	printf("Podaj liczbe od ktorej chesz odejmowac: ");
	scanf(" %d", &w);
	while ( a != 0) {
		printf("Podaj odjemnik: ");
		scanf(" %d", &a);
		w -= a;
	}
	return w;
}

int mnozenie() {
	int w = 0, a, b;
	printf("Podaj pierwszy czynnik: \n");
	scanf(" %d", &a);
	printf("Podaj drugi czynnik: \n");
	scanf(" %d", &b);
	w = a * b;
	return w;
	
}

double dzielenie() {
	double w = 0, a, b;
	printf("Podaj pierwszy czynnik: \n");
	scanf(" %lf", &a);
	printf("Podaj drugi czynnik: \n");
	scanf(" %lf", &b);
	if (b == 0){
		printf("Blad, nie mozna dzielic przez zero");
		return 0;
	}
	w = a / b;
	return w;
	
}

long int potega() {
	long int liczba;
	long int wykladnik;
	long int w = 1;
	printf("Podaj podstawe potegi: \n");
	scanf(" %ld", &liczba);
	printf("Podaj wykladnik potegi: \n");
	scanf(" %ld", &wykladnik);
	if ((liczba == 0) && (wykladnik == 0)) { 
	printf("Nie zdefiniowany");
	return 0;
	}
	if (wykladnik == 0){
		return 1;
	}
	int i;
	for (i = 1; i <= wykladnik; i++){
		w *= liczba;
	}
	
	return w;
}

long int kwadratliczby() {
	long int w = 0;
	printf("Podaj liczbe aby zobaczyc jej kwadrat: \n");
	scanf(" %ld", &w);
	w *= w;
	return w;
}

long int silnia() {
	long int a = 0;
	printf("Podaj liczbe a: ");
	scanf(" %ld", &a);
	if (a < 0){
		return 0;
	}
	long int w = 1;
	int i;
	for (i = 1; i <= a; i++){
		w *= i;
	}
	return w;
}

int main() {
	int zawsze = 0;
    char zmiana;

    while (zawsze==0){
    printf(" \n");
    printf("=====  Wybierz dzialanie:  =====\n");
    printf(" dodawanie n liczb(a)\n");
    printf(" odejmowanie od liczby az do momentu podania '0'(b)\n");
    printf(" mnozenie dwoch liczb(c)\n");
    printf(" dzielenie liczby(d)\n");
    printf(" potegowanie(e)\n");
    printf(" kwadrat liczby(f)\n");
    printf(" silnia(g)\n");
    printf(" koniec programu(h)\n");
    scanf(" %c", &zmiana);
    int wynik1 = 0;
    double wynik2 = 0;
    long int wynik3 = 0;
    switch(zmiana) {
    	case 'a': 
			wynik1 = dodawanie();
			printf("Wynikiem dodawania jest: %d\n", wynik1);
			break;
    	case 'b': 
			wynik1 = odejmowanie();
			printf("Wynikiem odejmowania jest: %d\n", wynik1);
			break;
    	case 'c': 
			wynik1 = mnozenie();
			printf("Wynikiem mnozenia jest: %d\n", wynik1);
			break;
    	case 'd': 
			wynik2 = dzielenie();
			printf("Wynikiem dzielenia jest: %lf\n", wynik2);
			break;
    	case 'e': 
			wynik3 = potega();
			printf("Wynikiem potegowania jest: %ld\n", wynik3);
			break;
    	case 'f': 
			wynik3 = kwadratliczby();
			printf("Kwadratem podanej liczby jest: %ld\n", wynik3);
			break;
    	case 'g': 
			wynik3 = silnia();
			printf("Wynikiem silni z podanej liczby jest: %d\n", wynik3);
			break;
    	case 'h': 
			printf("Program zakonczony!");
			return 0;
        default:
            printf("Niepoprawny znak.\n");
            break;
	}
	}
    return 0;
}


