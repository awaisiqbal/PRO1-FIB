#include <iostream>
#include <vector>
using namespace std;

int count_equals(int size){
	
	vector<int> u (size);
	cin >> u[0];
	for(int i = 1; i < size;++i)
		u[i] = u[0];
	int count = 1;
	for(int i = 1; i < size; ++i ){
		int n ;
		cin >> n;
		bool shouldAdd = true;
		for(int j = 0; j < i; ++j){
			if(u[j] == n) shouldAdd = false;
		}
		if(shouldAdd){
			u[i]= n;
			++count;
		}
	}
	return count;
}


int main(){
	
	int n = 0;
	while(cin >> n){
		cout << count_equals(n) << endl;
	}
}
