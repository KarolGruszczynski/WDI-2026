#include <stdio.h>

int main() {
    int liczba1, liczba2;
    
    printf("Wprowadz dwie liczby calkowite: \n");
    scanf("%d %d", &liczba1, &liczba2);

    if (liczba1 > liczba2) {
        printf("Wieksza to: %d\n", liczba1);
        printf("Mniejsza to: %d\n", liczba2);
        printf("Relacja: %d > %d\n", liczba1, liczba2);
    } else if (liczba2 > liczba1) {
        printf("Wieksza to: %d\n", liczba2);
        printf("Mniejsza to: %d\n", liczba1);
        printf("Relacja: %d < %d\n", liczba1, liczba2);
    } else {
        printf("Liczby sa rowne: %d\n", liczba1);
        printf("Relacja: %d = %d\n", liczba1, liczba2);
    }

    scanf(" ");
}
