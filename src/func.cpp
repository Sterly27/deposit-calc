#include <iostream>
#include <cstdlib>
#include <cstdio>

void Reckoning(int* s,int* d){
	if(*s < 10000|| *d<0 || *d>365) {
	Reckoning(s, d);
	}
	}
	
	void Implement(int* s,int* d){

		if(*d > 0 && *d <= 30){
		*s*=0.9;
	}
		if(*s<=100000) {
			
			if(*d>=31 && *d<=120) {
				*s*=1.02;
		    }
		    	if(*d>=121 && *d<=240) {
		    	*s*=1.06;
		    }
		        if(*d>=241 && *d<=365) {
		        *s*=1.12;
		    }
		    } else if(*s>100000) {
		    }
		    		if(*d>=31 && *d<=120) {
		    		*s*=1.03;
		    		}
		    		if(*d>=121 && *d<=240) {
		    		*s*=1.08;
		    		}
		    		if(*d>=241 && *d<=365) {
		    		*s*=1.15;
		    		}
		   } 
           			
