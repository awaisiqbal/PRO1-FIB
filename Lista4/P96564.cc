#include <iostream>
using namespace std;

int gcd(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int lcms(int a, int b){
	return (a/gcd(a,b))*b;
}

int main(){
	int  numbersToIntroduce = 0;
	cin >> numbersToIntroduce;
	while(numbersToIntroduce != 0){
		int lcm ;
		cin >> lcm;
		
		
		for(int i = 0; i < numbersToIntroduce - 1 ; ++i ){
			int num2 ;
			cin >> num2;
			lcm = lcms(lcm,num2);
		}
		
		cout << lcm << endl;
		cin >> numbersToIntroduce;
	}
	
}


	
