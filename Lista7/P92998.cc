#include <iostream>
#include <math.h>
using namespace std;

void girar( int n){
	
	if(n > 0){
		string s;
		cin >> s;
		girar(n-1);
		cout << s << endl;
	}
}

int main(){
	int n;
	cin >> n;
	girar(n);
}
