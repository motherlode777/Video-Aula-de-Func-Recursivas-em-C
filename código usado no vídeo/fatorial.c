#include <stdio.h>

int fatorial (int x); 

int main (){
	
int num; 
scanf ("%d", &num); 

printf ("O resultado da fatorial desse numero eh: %d", fatorial(num)); 
	
	
	return 0; 
}


int fatorial (int x){
		if (x == 0)
		{
		return 1;
		} 
		
		else 
		{
		return x * fatorial (x-1); 		
		}
		
		}
