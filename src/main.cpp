#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "func.h"

using namespace std;


int main(){
	int s=0;
	int d=0;

	cout<<"enter s";
	cin>>s;
	cout<<"enter d";
	cin>>d;
	
	if (Reckoning(&s,&d)) {cout << "Error"; return 1;}
	Implement(&s,&d); 
	
	printf("%d",s);
	
		return 0;
	}
	

  
           			
			
		    
	



