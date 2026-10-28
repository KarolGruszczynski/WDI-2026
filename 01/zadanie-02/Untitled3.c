#include <stdio.h>
int main() {
	float liczba;
	printf("Podaj liczbe: ");
	scanf("%f", &liczba);
	printf("Z dokladnoscia do 1 miejsca po przecinku:%.1f\n", liczba);
	printf("Z dokladnoscia do 3 miejsc po przecinku:%.3f\n", liczba);
	printf("Z dokladnoscia do 5 miejsc po przecinku:%.5f\n", liczba);
	scanf(" ");
}
