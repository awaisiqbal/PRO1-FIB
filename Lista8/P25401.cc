#include <iostream>
#include <vector>
#include <algorithm>
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

int diferents(vector<int> v){
	int last = v[0];
	int count = 1;
	int size = v.size();
	for(int i = 1; i < size; ++i){
		if(last != v[i]){
			++count;
			last = v[i];
		}
	}
	
	return count;
}

int main(){
	int n = 0;
	while(cin >> n){
		vector<int> v (n);
		v = get_vector(n);
		sort(v.begin(),v.end());
		cout << diferents(v) << endl;
	}
}
