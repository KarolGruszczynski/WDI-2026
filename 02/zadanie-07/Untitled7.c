#include <stdio.h>
int main() {
	const unsigned granica = 20U;
	unsigned wynik = 0U;
	unsigned i;
	
	for (i = 1U; i <= granica; ++i){
		if(i % 3U == 0U){
			wynik += i;
		}
		
	}
	printf("Suma liczb jest rowna: %u", wynik);
	
	return 0;
}
