#include <stdio.h>

int main() {
    int sekundy_w;
    
    printf("Podaj liczbe sekund: ");
    if (scanf("%d", &sekundy_w) != 1 || sekundy_w < 0) {
        printf("Podano nieprawidlowe dane.\n");
        return 1;
    }
    
    int godziny = sekundy_w / 3600;
    int sekundy_p = sekundy_w % 3600;
    int minuty = sekundy_p / 60;
    int sekundy = sekundy_p % 60;

    printf("%d h %d min %d s\n", godziny, minuty, sekundy);
	scanf(" ");
}
