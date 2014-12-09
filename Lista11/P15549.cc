#include <iostream>
#include <vector>
using namespace std;
void swap(double& a,double& b){
	int aux = a;
	a = b;
	b = aux;
}
void bubble_sort(vector<double>& v){
	bool sorted = false;
	int last = v.size() - 1;
	while (not sorted) { // Stop when no changes
		sorted = true;
		for (int i = 0; i < last; ++i) {
			if (v[i] > v[i + 1]) {
				swap(v[i], v[i + 1]);
				sorted = false;
			}
		}
		// The largest element falls to the bottom
		--last;
	}
}


void print_vector(const vector<double>& v){
	int size = v.size();
	for(int i = 0; i < size; ++i){
		cout << v[i]  ;
		if(i != size -1) cout << " , ";
	}
	cout << endl;
}
int main(){
	int n ;
	while(cin >> n){
		vector<double> v (n);
		for(int i = 0 ; i < n; ++i){
			cout <<  i <<": " ;
			cin >> v[i];
		}
		bubble_sort(v);
		
		print_vector(v);
		
	}
}
