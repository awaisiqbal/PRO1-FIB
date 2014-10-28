#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	for(int i = a;i <= b;++i){
		for(int j = c; c <= d;++j){
			int calc = sqrt(i*i+j*j);
			//if(calc == ceil(calc))
			cout << calc << endl;
			
		}
	}
}
