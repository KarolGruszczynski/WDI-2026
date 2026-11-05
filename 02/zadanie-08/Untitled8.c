#include <stdio.h>

double max(double a, double b){
	if (a>b){
		return a;
	}
	else{
		return b;
	}
}
double min(double a, double b){
	if (a>b){
		return b;
	}
	else{
		return a;
	}
}
int main() {
	double a = 0;
	double b = 0;
	printf("Podaj liczbe a: ");
	scanf(" %lf", &a);
	printf("Podaj liczbe b: ");
	scanf(" %lf", &b);
	printf("Funkcja max: ");
	printf(" %lf\n", max(a, b));
	printf("Funkcja min: ");
	printf(" %lf", min(a, b));

	return 0;	
}
