#include <stdio.h>
int main() {
    int zmiana;
	
    printf("Wpisz numer miesiaca (1-12) \n");
    scanf(" %i", &zmiana);
    
    switch(zmiana){
    	case 1:
    	case 2:
    	case 3:
    		printf("Kwartal 1 \n");
    		break;
    	case 4:
    	case 5:
    	case 6:
    		printf("Kwartal 2 \n");
			break;
    	case 7:
    	case 8:
    	case 9:
			printf("Kwartal 3 \n");
			break;
        case 10:
        case 11:
        case 12:
    		printf("Kwartal 4 \n");		
            break;
        default:
            printf("Niepoprawny miesiac.\n");
            break;
            
	}

	return 0;
}
