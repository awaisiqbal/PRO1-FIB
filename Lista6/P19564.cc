#include <iostream>
#include <math.h>
using namespace std;

int valencia(int n){
	int sumEven = 0;
	int sumOdd = 0;
	int count = 1;
	while( n != 0){
		if(count % 2 == 0){
			sumEven += n % 10;
		} else {
			sumOdd += n % 10;
		}
		n = n / 10;
		++count;
	}
	int valencia = sumOdd-sumEven;
	if(valencia < 0) valencia *= -1;
	return valencia;
}


int main(){
	 int n;
	 cin >> n;
	 int vmax = valencia(n);
	 bool balanced = vmax == 0;
	 
	 while(not(balanced) and cin >> n){
		int v = valencia(n);
		if(v > vmax) vmax = v;
		balanced = v == 0;
	 }
	 if (balanced){
		 cout << "The first balanced number is " << n << "." << endl;
	 } else {
		 cout << "The greatest valencia is "<< vmax << "." << endl;
	 }
	 
}
