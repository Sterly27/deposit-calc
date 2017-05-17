#include <stdlib.h>
#include <stdio.h>
#include "func.h"

int main(){
	int s=0;
	int d=0;

	printf("Enter s");
	scanf("%d", &s);
	printf("Enter d");
	scanf("%d", &d);
	
	if (Reckoning(s,d)) {printf("\nError\n"); return 1;}
	s = Implement(s,d); 
	
	printf("%d",s);
	
	return 0;
	}
	

  
           			
			
		    
	



