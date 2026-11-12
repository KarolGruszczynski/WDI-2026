#include <stdio.h>
void scal(int tablica[], int lewy, int srodek, int prawy, int pom[]) 
{
	int i;
	int j = srodek + 1;
 
  //kopiujemy lewa i prawa czesc tablicy do tablicy pomocniczej
  for(i = lewy; i <= prawy; i++) {
    pom[i] = tablica[i];  
	}
  
  //scalenie dwóch podtablic pomocniczych i zapisanie ich 
  //we wlasciwej tablicy
  i = lewy;
  int k;
  for(k=lewy;k<=prawy;k++) {
  if(i<=srodek)
    if(j <= prawy)
         if(pom[j]<pom[i])
             tablica[k] = pom[j++];
         else
             tablica[k] = pom[i++];
    else
        tablica[k] = pom[i++];
  else
      tablica[k] = pom[j++];
}
}
void sortowanie_przez_scalanie(int tablica[],int lewy, int prawy, int pom[])
{
	//gdy mamy jeden element, to jest on juz posortowany
	if(prawy<=lewy) {
		return;
	} 
	
	//znajdujemy srodek podtablicy
	int srodek = (prawy+lewy)/2;
	
	//dzielimy tablice na czesc lewa i prawa
	sortowanie_przez_scalanie(tablica, lewy, srodek, pom); 
	sortowanie_przez_scalanie(tablica, srodek+1, prawy, pom);
	
	//scalamy dwie juz posortowane tablice
	scal(tablica, lewy, srodek, prawy, pom);
}


int main() {
	int i;
	int tablica[10];
	int pom[10];
	for (i = 0; i < 10; i++) {
		printf("Podaj %d liczbe:  ", i+1);
		scanf("%d", &tablica[i]);
		pom[i] = tablica[i];
	}
	
	sortowanie_przez_scalanie(tablica, 0, 9, pom);
	//wypisanie ulozonej tablicy tablicy
	printf("Tablica wypisana od pierwszego elementu: \n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", tablica[i]);
	}
	return 0;
}
