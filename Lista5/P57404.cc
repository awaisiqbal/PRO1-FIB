#include <iostream>
using namespace std;

bool is_powerful(int n){
	bool esp= true;
	if(n != 1){
		int factor = 2;
		int copia_n = n;
		while(n > 1){
			if(n % factor > 0){
				++factor;
			} else {
				n /= factor;
				esp = esp and copia_n % (factor * factor) == 0;
			}
		}
	}
	
	return esp;
}

int main(){
	int m;
	while(cin >> m){
		bool primer = true;
		for(int i = 1 ; i <= m; ++i){
			if(is_powerful(i)){
				if(primer){
					primer = false;
				} else {
					cout << ",";
				}
				cout << i;
			}
		}
		cout << endl;
		
	}
}

