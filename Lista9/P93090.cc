#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Fraction { 
	int num, den; // always strictly positive 
};

int gcd(int a, int b){
	while(b != 0){
		int r = a% b;
		a = b;
		b = r;
	}
	return a;
}

Fraction addition(const Fraction& x, const Fraction& y){
	Fraction resultado;
	int mcd = gcd( x.den, y.den);
	int multiplyDenX = mcd / x.den;
	int multiplyDenY = mcd / y.den;
	int sum = (x.den * multiplyDenX + y.den * multiplyDenY);
	 
	resultado.num = sum;
	resultado.den = mcd;
	int n = gcd(resultado.num,resultado.den);
	resultado.num = resultado.num / n;
	resultado.den = resultado.den / n;
	return resultado;
}

int main(){
	int n,d;
	char c;
	cin >> n >> c >> d;
	Fraction op1;
	op1.num = n;
	op1.den = d;
	cin >> c;
	while(c != '='){
		Fraction op2;
		cin >> op2.num >> c >> op2.den;
		op1 = addition(op1,op2);
		cin >> c;
	}
	
	cout << op1.num << "/" << op1.den;
	
	
}
