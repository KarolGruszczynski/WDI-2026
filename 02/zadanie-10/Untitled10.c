#include <stdio.h>

double potega(double liczba, double wykladnik) {
	if ((liczba == 0) && (wykladnik == 0)) { 
	printf("Nie zdefiniowany");
	return 0;
	}
	if (wykladnik == 0){
		return 1;
	}
	unsigned long w = 1;
	int i;
	for (i = 1; i <= wykladnik; i++){
		w *= liczba;
	}
	return w;
}

int main() {
	double liczba = 0;
	double wykladnik = 0;
	printf("Podaj liczbe: ");
	scanf(" %lf", &liczba);
	printf("Podaj wykladnik: ");
	scanf(" %lf", &wykladnik);
	printf("Potega: ");
	printf(" %lf\n", potega(liczba, wykladnik));


	return 0;	
}
