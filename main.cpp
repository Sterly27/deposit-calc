#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
	int s=0;
	int d=0;

	cout << "enter s" << endl;
	cin >> s;
	if(s < 0) {
		cout << "error" << endl;
		return 0;
	}

	cout << "enter d" << endl;
	cin >> d;
	if(d < 0 && d > 365) {
		cout << "error" << endl;
		return 0;
	}


	if(s < 100000) {
		if(d > 0 && d <= 30) {
			s = s - s * 0.1;
		} else if(d >= 31 && d <= 120) {
			s = s + s * 0.02;
		} else if(d >= 121 && d <= 240) {
			s = s + s * 0.06;
		} else if(d >= 241 && d <= 365) {
			s = s + s * 0.12;
		}
	}
	if(s >= 100000){
		if(d > 0 && d <= 30){
			s = s - s * 0.1;
		} else if(d>=31 && d<=120) {
			s=s+s*0.03;
		} else if(d >= 121  && d <= 240) {
			s = s + s * 0.08;
		} else if(d >= 241 && d <= 365) {
			s = s + s * 0.15;
		}
	}

	cout << s <<endl;

	return 0;
}

