#include <iostream>
using namespace std;

int suma_bits_potencies_parells(int n){

	int sumapar = 0;
	int count = 0;
	while( n != 0){
		if(count % 2 == 0){
			sumapar += n % 2;
		}
		n = n / 2;
		++count;
	}
	return sumapar;
}

int main(){
	cout << suma_bits_potencies_parells(203);
}
