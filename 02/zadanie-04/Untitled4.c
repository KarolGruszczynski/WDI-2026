#include <stdio.h>
int main() {
    double a, b, wynik = 0;
    char znak;
    char zmiana;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &a);

    printf("Podaj druga liczbe: ");
    scanf("%lf", &b);
    while (wynik==0){
    printf("Wybierz dzialanie (zmiana pierwszej liczby(p), zmiana drugiej liczby(d), wykonanie dzialania(g): ");
    scanf(" %c", &zmiana);
    
    switch(zmiana){
    	case 'p':
    		printf("Podaj nowa pierwsza liczbe: ");
    		scanf("%lf", &a);
			break;
    	case 'd':
    		printf("Podaj nowa druga liczbe: ");
    		scanf("%lf", &b);
			break;
    	case 'g':
    		printf("Podaj znak dzialania (+, -, *, /, %%): ");
    		scanf(" %c", &znak);
			switch(znak) {
		        case '+':
		            wynik = a + b;
		            printf("Wynik: %.2lf\n", wynik);
		            return 0;
		        case '-':
		            wynik = a - b;
		            printf("Wynik: %.2lf\n", wynik);
		            return 0;
		        case '*':
		            wynik = a * b;
		            printf("Wynik: %.2lf\n", wynik);
		            return 0;
		        case '/':
		            if (b == 0) {
		                printf("Nie mozna dzielic przez zero!\n");
		            } else {
		                wynik = a / b;
		                printf("Wynik: %.2lf\n", wynik);
		            }
		            return 0;
		        case '%':
		            if ((int)b == 0) {
		                printf("Nie mozna dzielic przez zero!\n");
		            } else {
		                int resztka = (int)a % (int)b;
		                printf("Wynik (reszta): %d\n", resztka);
		            }
		            return 0;
			    default:
	            printf("Niepoprawny znak.\n");
	            break;
	    	}
    	default:
            printf("Niepoprawny znak.\n");
            break;
	}
	}
return 0;
}

