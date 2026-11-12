#include <stdio.h>
#define MAX 5
#define ERROR 1000000000

int fifo_tabela[MAX];
int lifo_tabela[MAX];
int poczatkowa = 0;
int ostatnia = 0;
int wierzcholek = 0;
//FIFO
int push_back(int element)
{
	if (ostatnia == MAX) {
		return 0;
	}
	fifo_tabela[ostatnia++] = element;
	return 1;
}
int pop_back()
{
	if (poczatkowa == ostatnia) {
		return 0;
	}
	poczatkowa++;
	return 1;
}
unsigned int size_fifo()
{
	return ostatnia - poczatkowa;
}
int first()
{
	if (poczatkowa == ostatnia) {
		return ERROR;
	}
	return fifo_tabela[poczatkowa];
}
int last()
{
	if (poczatkowa == ostatnia) {
		return ERROR;
	}
	return fifo_tabela[ostatnia - 1];
}
//LIFO
int push(int element)
{
	if (wierzcholek == MAX) {
		return 0;
	}
	lifo_tabela[wierzcholek++] = element;
	return 1;
}
int pop()
{
	if (wierzcholek == 0) {
		return 0;
	}
	--wierzcholek;
	return 1;
}
int empty()
{
	if (wierzcholek == 0) {
		return 0; //pusty
	}
	else
		return 1; //pelny
}
unsigned int size_lifo()
{
	return wierzcholek;
}
int value()
{
	if (wierzcholek == 0) {
		return ERROR;
	}
	return lifo_tabela[wierzcholek - 1];
}

int main()
{
	int i = 1, znak, znacznik, element, wynik;

	while (i == 1)
	{
		printf("\n======== MENU ========\n");
		printf("FIFO (1)\n");
		printf("LIFO (2)\n");
		printf("Koniec programu (3)\n");
		printf("Wybierz dzialanie: ");
		scanf("%d", &znak);

		if (znak == 3)
		{
			printf("Koniec\n");
			return 0;
		}

		switch (znak)
		{
			case 1:
				printf("\n FIFO \n");
				printf("push_back(element) - dodanie elementu na koniec kolejki (1)\n");
				printf("pop_back() - usuniecie elementu z poczatku kolejki (2)\n");
				printf("size() - liczba elementow w kolejce (3)\n");
				printf("first() - wartosc pierwszego elementu w kolejce (4)\n");
				printf("last() - wartosc ostatniego elementu w kolejce (5)\n");
				printf("Wybierz dzialanie: ");
				scanf("%d", &znacznik);

				switch (znacznik)
				{
					case 1:
						printf("Podaj liczbe: ");
						scanf("%d", &element);
						if (push_back(element) == 1) {
							printf("Dodano %d na koniec\n", element);
						}
						else {
							printf("Kolejka przepelniona\n");
						}
						break;

					case 2:
						if (pop_back() == 1) {
							printf("Usunieto pierwsza liczbe\n");
						}
						else {
							printf("Kolejka jest pusta\n");
						}
						break;

					case 3:
						printf("Ilosc liczb w kolejce: %u\n", size_fifo());
						break;

					case 4:
						wynik = first();
						if (wynik == ERROR) {
							printf("Kolejka jest pusta\n");	
						}
						else {
							printf("Pierwsza liczba w kolejce: %d\n", wynik);
						}
						break;

					case 5:
						wynik = last();
						if (wynik == ERROR) {
							printf("Kolejka jest pusta\n");
						}
						else {
							printf("Ostatnia liczba w kolejce: %d\n", wynik);
						}
						break;

					default:
						printf("Nieprawidlowy znak\n");
						break;
				}
				break;

			case 2:
				printf("\n LIFO \n");
				printf("push(element) - dodanie elementu na stos (1)\n");
				printf("pop() - usuniecie elementu ze stosu (2)\n");
				printf("empty() - sprawdzenie, czy stos jest pusty (3)\n");
				printf("size() - zwrocenie liczby elementow na stosie (4)\n");
				printf("value() - zwrocenie ostatniego elementu na stosie (5)\n");
				printf("Wybierz dzialanie: ");
				scanf("%d", &znacznik);

				switch (znacznik)
				{
					case 1:
						printf("Podaj liczbe na stos: ");
						scanf("%d", &element);
						if (push(element) == 1) {
							printf("Polozono %d na stos\n", element);
						}
						else {
							printf("Stos jest pelny\n");
						}
						break;

					case 2:
						if (pop() == 1) {
							printf("Zdjeto element ze szczytu stosu\n");
						}
						else {
							printf("Stos jest pusty\n");
						}
						break;

					case 3:
						if (empty() == 0) {
							printf("Stos jest pusty\n");
						}
						else {
							printf("Stos nie jest pusty\n");
						}
						break;

					case 4:
						printf("Ilosc liczb na stosie: %u\n", size_lifo());
						break;

					case 5:
						wynik = value();
						if (wynik == ERROR) {
							printf("Stos jest pusty\n");
						}
						else {
							printf("Ostatnia liczba na stosie: %d\n", wynik);
						}
						break;

					default:
						printf("Nieprawidlowy znak\n");
						break;
				}
				break;

			default:
				printf("Nieprawidlowy znak\n");
				break;
		}
	}

	return 0;
}
