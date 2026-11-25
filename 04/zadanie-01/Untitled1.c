#include <stdio.h>
int quick_sort(int temp[], int l, int r) {
	if (l < r) {
		int policzona = podzial(temp, l, r);
		quick_sort(temp, l, policzona - 1);
		quick_sort(temp, policzona + 1, r);
	}
}
int podzial(int temp[], int l, int r) {
	int pivot = temp[r];
	int j;
	int nowy;
    int i = l - 1;
    for (j = l; j < r; j++) {
        if (temp[j] <= pivot) {
            i++;
            nowy = temp[i];
            temp[i] = temp[j];
            temp[j] = nowy;
        }
    }
    nowy = temp[i + 1];
    temp[i + 1] = temp[r];
    temp[r] = nowy;
    return i + 1;
}


int main() {
	int i;
	int tablica[10];
	printf("Podaj elementy do listy: \n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &tablica[i]);
	}	
	quick_sort(tablica, 0, 9);
    for (i = 0; i < 10; i++) {
		printf("%d ", tablica[i]);
}
    return 0;
}

