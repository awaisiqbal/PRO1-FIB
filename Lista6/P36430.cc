#include <iostream>
#include <math.h>
using namespace std;

bool calculateFermat(int a, int b, int c, int d, int &x, int &y, int &z){
	
	for(int i = a;i <= b;++i){
		for(int j = c; j <= d;++j){	
			int calc = sqrt(i*i+j*j);
			if(calc*calc == i*i + j*j){
				x = i;
				y = j;
				z = calc;
				return true;
			}
			
		}
	}
	return false;
}

int main(){
	int a,b,c,d,x,y,z;
	cin >> a >> b >> c >> d;
	bool founded = calculateFermat(a,b,c,d,x,y,z);
	if(founded){
		cout << x << "^2 + " << y << "^2 = " << z << "^2" << endl;
	} else {
		cout << "No solution!" << endl;;
	}
}
