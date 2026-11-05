#include <stdio.h>
int main() {
    char zmiana;
	char a[] = "czcic krola";
	char b[] = "wchodzic na dziedziniec zamkowy codziennie";
	char c[] = "wchodzic do zamku codziennie oraz rekrutowac giermkow";
	char d[] = "rozmawiac z Krolem";
	char e[] = "rozkazywac Krolowi";
	int i = 0;
	
	while(i < 1) {
    printf("Kim jestes w krolestwie? \nPoddany(p) Giermek(g) Rycerz(r) Mag(m) Krolowa(k) \n");
    scanf(" %c", &zmiana);
    
    switch(zmiana){
    	case 'p':
    		printf("Poddany moze: %s", &a);
    		printf("\n");
    		break;
    	case 'g':
    		printf("Giermek moze: %s, %s", &a, &b);
    		printf("\n");
			break;
    	case 'r':
    		printf("Rycerz moze: %s, %s, %s", &a, &b, &c);
    		printf("\n");
			break;
        case 'm':
    		printf("Mag moze: %s, %s, %s, %s", &a, &b, &c, &d);
    		printf("\n");		
            break;
        case 'k':
			printf("Krolowa moze: %s, %s, %s, %s, %s", &a, &b, &c, &d, &e);
    		printf("\n");
            break;
        default:
            printf("Niepoprawny znak.\n");
            break;
            
	}
	}


return 0;
}
