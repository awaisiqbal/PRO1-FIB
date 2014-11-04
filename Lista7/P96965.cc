#include <iostream>
#include <math.h>
using namespace std;


int sum_of_digits(int x){
	if(x < 10) return x;
	else {
		return (x % 10) + sum_of_digits(x / 10);
	}
}

int reduction_of_digits(int x){
	int n = sum_of_digits(x);
	if(n < 10) return n;
	else{
		return reduction_of_digits(n);
	}
}

int main(){
	int n;
	while(cin >> n){
		cout << " -> " << reduction_of_digits(n) << endl;
	}
}
