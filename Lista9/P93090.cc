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
	
	Fraction resultado = x;
    int minim = gcd(y.num, y.den);
    resultado.num = y.num/minim;
    resultado.den = y.den/minim;
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
		op1.num = op1.num*op2.den + op1.den*op2.num;
		op1.den = op1.den * op1.den;
		op1 = addition(op1,op2);
		
		cin >> c;
	}
	
	if (op1.num == 0) cout << 0 << endl;
    else cout << op1.num << '/' << op1.den << endl;
	
	
}
