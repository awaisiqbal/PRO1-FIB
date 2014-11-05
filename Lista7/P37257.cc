#include <iostream>
using namespace std;

int getN(int& n, int b){
	int ret = n % b;
	n /= b;
	return ret;
}
bool three_equal_consecutive_digits(int n, int b){
	if(n <= b*b ){
		//cout << "menor." << endl;
		 return false;
	}
	else {
		int nCopy = n;
		int d0 = getN(nCopy , b);
		int d1 = getN(nCopy , b);
		int d2 = getN(nCopy , b);/*
		cout << "d0: " << d0 << endl;
		cout << "d1: " << d1 << endl;
		cout << "d2: " << d2 << endl;*/
		if(d0 == d1 and d1 == d2){
			return true;
		} else {
			return three_equal_consecutive_digits(n / b,b);
		}
	}	
}

int main(){
	int n, b;
	while(cin >> n >> b){
		cout << " -> ";
		if(three_equal_consecutive_digits(n,b)) cout << "True." << endl;
		else {
			cout << "False."  << endl;
		}
	}
}
