#include <stdio.h>

int funkcja(n) {
	if (n == 1){
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (n == 3) {
		return 3;
	}
	return ((funkcja(n-1)*funkcja(n-2))-funkcja(n-3));
}
int main() {
	int n;
	printf("Podaj liczbe n: ");
	scanf(" %d", &n);
	printf("Wynikiem funkcji jest: %d", funkcja(n));
	
}
