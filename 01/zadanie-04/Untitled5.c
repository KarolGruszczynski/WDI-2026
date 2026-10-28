#include <stdio.h>
int main() {
	int liczba1, liczba2, liczba3;
	
	printf("Podaj trzy liczby calkowite: \n");
	scanf("%d %d %d", &liczba1, &liczba2, &liczba3);
	
	//suma
	int suma = liczba1 + liczba2 + liczba3;
	//roznica pierwszych dwoch
	int roznica = liczba1;
	roznica -= liczba2;
	//iloczyn pierwszej i trzeciej
	int iloczyn = liczba1 * liczba3;
	
	printf("Suma liczb to: %d\n", suma);
	printf("Roznica pierwszych dwoch liczb: %d\n", roznica);
	printf("Iloczyn pierwszej i trzeciej liczby: %d\n", iloczyn);
	//iloraz trzeciej i drugiej
	if (liczba2 > 0) {
		float iloraz = (float) liczba3 / liczba2;
		printf("Iloraz trzeciej i drugiej liczby: %.1f\n", iloraz);
	} else {
		printf("Nie mozna dzielic przez 0!");
	}

	scanf(" ");
}
