#include <stdio.h>

#define MAX 10000000
#define TRUE 1
#define FALSE 0

int main(){

        int i, j;
	int isprime = TRUE;
	int count = 1;
	int current_prime = 2;

	for(i = 3; count < MAX; i+=2){
		for(j = 3; (j <= current_prime / j + 1) && isprime; j+=2){
			if(!(i % 2) || (!(i % j) && (i != j))){
				isprime = FALSE;	
			}
		}
		if(isprime){
			count++;
			current_prime = i;
		}

		isprime = TRUE;
	}
	
	/*printf("%d\n", count);*/
	printf("%d\n", current_prime);
}
