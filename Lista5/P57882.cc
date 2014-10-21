#include <iostream>
using namespace std;



int suma_divisors(int n){
	int sum = 0;
	for (int i = 1 ; i <= n/2;  i++){
		if (n % i == 0){
			sum += i;
		}
	}
    return sum;
}

int main(){
	//cout << suma_divisors(132);
	
	
	int n;
	while(cin >> n){
		
		int k = 1;
		int sd = suma_divisors(n-2) + suma_divisors(n) + suma_divisors(n+2);
		while(k*n < sd){
			++k;
		}
		cout << n << ": ";
		if(k*n == sd){
			if(k == 1){
				cout << "popiropis";
			} else {
				cout << k << "-popiropis";
			}
		} else {
			cout << "nothing";
		}
		cout << endl;
		
		
		
	}
}
