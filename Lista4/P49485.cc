#include <iostream>
using namespace std;

bool es_equilibrat_de_tres_en_tres(int n){

	int suma0 = 0, suma1 = 0, suma2 = 0;
	int count = 0;
	while( n != 0){
		if(count % 3 == 0){
			suma0 += n % 2;
		} else if( count % 3 == 1){
			suma1 += n % 2;
		} else {
			suma2 += n % 2;
		}
		n = n / 2;
		++count;
	}
	return suma0 == suma1 and suma1 == suma2;
}

int main(){
	cout << es_equilibrat_de_tres_en_tres(2135);
}
