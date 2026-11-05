#include <stdio.h>

double silnia(double a) {
	if (a < 0){
		return 0;
	}
	unsigned long w = 1;
	int i;
	for (i = 1; i <= a; i++){
		w *= i;
	}
	return w;
}

int main() {
	double a = 0;
	printf("Podaj liczbe a: ");
	scanf(" %lf", &a);
	printf("Silnia z a: ");
	printf(" %lf\n", silnia(a));


	return 0;	
}
