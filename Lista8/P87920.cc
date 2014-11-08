#include <iostream>
#include <vector>
using namespace std;


bool equals_sum(const vector<int>& u){
	int size = u.size();
	int max = u[0] , min = u[0];
	int max_index = 0, min_index = 0;
	for(int i = 0; i < size; ++i ){
		if(u[i] > max){
			 max = u[i];
			 max_index = i;
			 
		 } else if (u[i] < min ){
			min = u[i];
			min_index = i;
		 }
	}
	int sum_max = 0, sum_min;
	for(int i = 0; i < size; ++i ){
		if(i != max_index) sum_max += u[i];
		if(i != min_index) sum_min += u[i];
		
	}
	if (max == sum_max or min == sum_min){
		 return true;
	}
		 
	return false;
}
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


int main(){
	int n;
	while(cin >> n){
		vector<int> v = get_vector(n);
		if (equals_sum(v)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
