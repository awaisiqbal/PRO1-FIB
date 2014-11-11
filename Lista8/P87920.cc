#include <iostream>
#include <vector>
using namespace std;

vector<int> get_vector(int n){
	vector<int> v (n);
	for(int i = 0; i < n; ++i){
		int u ;
		cin >> u;
		v[i] = u;
	}
	return v;
}

void print_vector(const vector<int>& v){
	int size = v.size();
	cout << "[ ";
	for(int i = 0; i < size; ++i){
		cout << v[i] ;
		if(i != size -1)  cout << " , ";
	}
	cout << " ]" << endl;
}

bool precesar(int n){
	vector <int> v (n);
	int suma = 0;
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		suma += v[i];
	}
	for(int i = 0; i < n; ++i){
		if(suma-v[i] == v[i])
			return true;
	}
	return false;
}


int main(){
	int n;
	while(cin >> n){
		if (precesar(n)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
