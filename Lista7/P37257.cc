#include <iostream>
using namespace std;


bool three_equal_consecutive_digits(int n, int b){
	if(n < b*b*b ) return false;
	else {
		int t3 = n % b*b*b;
		int d0 = t3 % b;	
		int d1 = (t3 / b) % b;
		int d2 = (t3 / b*b) % b;
		if(d0 == d1 and d1 == d2){
			return true;
		} else {
			return three_equal_consecutive_digits(n / b,b);
		}
	}	
}

int main(){
	int n, b;
	cin >> n >> b;
	cout << " -> " << three_equal_consecutive_digits(n,b) << endl;
	
}
