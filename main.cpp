#include <iostrem>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
  int main(){
  int s=0,d=0;
 cout<<"enter s"<<endl;
 cin>>s;
 cout<<"enter d"<<endl;
 cin>>d;

  if(s<0) {
  cout<<"error"<<endl;
  return 0;
  }
  if(d<0 && d>365) {
  cout<<"error"<<endl;
  return 0;
  }
      
      
  if(s<100000) {
  if(d>0 && d<=30) {
  s=s-s*0.1;
  } else if(d>=31 && d<=120) {
  s=s+s*0.02;
  } else if(d>=121 && d<=240) {
  s=s+s*0.06;
  } else if(d>=241 && d<=365) {
  s=s+s*0.12;
  }
  }
  if(s>=100000{
  if(d>0 && d<=30){
  s=s-s*0.1;
  }
  }
  
  
  
  
  
  
  
  
  return 0;
  }
  
