#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim){
	int count = 0;
	while(n != 0){
		int nDigit = n % 10;
		if (count != 0){
			if(nDigit > maxim)
				maxim = nDigit;
			if(nDigit < minim)
				minim = nDigit;
		} else {
			maxim = nDigit;
			minim = nDigit;
		}
		n = n / 10;
		count ++;
		
	}
}

int main(){
	int max = 0;
	int min = 9999;
	digit_maxim_i_minim(1704,max,min);
	cout << max << endl;
	cout << min << endl;
}
