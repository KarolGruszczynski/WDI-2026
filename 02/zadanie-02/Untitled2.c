#include <stdio.h>
int main() {
    int n, i = 0;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    if (n > 100){
        int temp = (n - 100);
        n -= temp;
    }
    int wynik = 0;
    for (i = 1; i <= n; i++) {
        wynik += (i * i); 
    }
    printf("Wynik: %d\n", wynik);
    return 0;
}
