#include <iostream>
#include <vector>
using namespace std;


int equals_sum(const vector<int>& u){
	int size = u.size();
	for(int i = 0; i < size; ++i ){
		int sum = 0;
		for(int j = 0; j < size; ++j ){
			if(j != i) 
				sum += u[j];
		}
		if (sum == u[i]) return i;
	}
	return -1;
}
vector<int> get_vector(){
	int n = 0;
	cin >> n;
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


int main(){
	vector<int> v = get_vector();
	
	//print_vector(v);
	
	
	if (equals_sum(v) == -1){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	
	/*
	vector<double> u  (5);
	u[0] = 1;
	u[1] = 2;
	u[2] = 3;
	u[3] = 4;
	u[4] = 5;
	
	vector<double> v  (5);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;
	*/
}
