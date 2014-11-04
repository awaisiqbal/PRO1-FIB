#include <iostream>
using namespace std;


bool es_guai(int n, int b){
	int dig = n % b;
	if(n < b) return (n % 2) == 0;
	else {
		
		return  (dig % 2 == 0) and es_guai(n / b , b);
	}
}

int main(){
	int n, b;
	cin >> n >> b;
	cout << " -> " << es_guai(n,b) << endl;
	if(es_guai(n,b)) cout << "guai" << endl;
	
}
