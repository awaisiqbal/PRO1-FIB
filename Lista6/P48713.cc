#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int num){

    for(int i=2; i*i <= num; ++i){
       if(num % i == 0) return false;
    }  
	return  true;
}


int main(){
	int num;
	cin >> num;
	
	for(int i = 0; i < num ; ++i){
		int n;
		cin >> n;
		bool isPrime = false;
		if(n > 1){
			isPrime = is_prime(n);
		}
		
		if(isPrime){
			cout << n << " is prime" << endl;
		} else {
			cout << n << " is not prime" << endl;
		}
	}
}
