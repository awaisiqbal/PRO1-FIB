#include <iostream>
#include <math.h>
using namespace std;

int number_of_digits(int n){
	int count = 0;
	if(n > 9){
		n /= 10;
		++count;
	}
	
	count += number_of_digits(n);
	
	return count;
}

int main(){
	int n;
	while(cin >> n){
		cout << " -> " << number_of_digits(n) << endl;
	}
}
