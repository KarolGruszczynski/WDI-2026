#include <stdio.h>
int main() {
	float o1, o2, o3, o4, o5;
	float srednia;
	int jedynka;
	
	printf("Podaj 5 ocen: \n");
	scanf("%f %f %f %f %f", &o1, &o2, &o3, &o4, &o5);
	
	srednia = (o1+o2+o3+o4+o5) / 5.0;
	printf("Srednia tych ocen to: %.2f\n", srednia);
	
        if (o1 == 1) {
            jedynka++;}
		if (o2 == 1) {
            jedynka++;}
        if (o3 == 1) {
            jedynka++;}
        if (o4 == 1) {
            jedynka++;}
        if (o5 == 1) {
            jedynka++;}
 	printf("Ilosc ocen niedostatecznych wynosi: %d", jedynka);
	scanf(" ");
}

