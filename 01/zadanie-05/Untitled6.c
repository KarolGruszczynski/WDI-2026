#include <stdio.h>
int main() {
	float o1, o2, o3, o4, o5;
	float srednia;
	
	printf("Podaj 5 ocen: \n");
	scanf("%f %f %f %f %f", &o1, &o2, &o3, &o4, &o5);
	
	srednia = (o1+o2+o3+o4+o5) / 5.0;
	printf("Srednia tych ocen to: %.2f\n", srednia);

	scanf(" ");
}
