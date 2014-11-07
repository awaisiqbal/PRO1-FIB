#include <iostream>
#include <vector>
using namespace std;


int count_equals(const vector<int>& v){
	int size = v.size();
	vector<int> u (size);
	int count = 1;
	u[0] = v[0];
	for(int i = 0; i < size; ++i ){
		bool should_add = true;
		for(int j = 0; j < size; ++j ){
			if(v[i] == u[j]){
				 should_add = false;
			}
		}
		if(should_add){
			 ++count;
			 u[i] = v[i];
		 }
	}
	return count;
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
	
	cout << count_equals(v) << endl;
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
