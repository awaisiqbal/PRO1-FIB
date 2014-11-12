#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& v){
	int size = v.size();
	for(int i = 0; i < size; ++i){
		if(v[i] == 0){
			cout << ".";
		} else if (v[i] == -1) {
			cout << "<";
		} else {
			cout << ">";
		}
	}
	cout << endl;
	 
}
void move(vector<int>& v){
	int size = v.size();
	vector<int> u (size);
	for(int i = 0; i < size ; ++i){
		if(v[i] == -1){
			if(i == 0 ){
				u[i+1] = 1;
			} else if ( v[i-1] != 0){
				u[i+1] = 1;
			} else {
				u[i-1] = -1;
			}
		} else if(v[i] == 1){
			if(i == size-1){
				u[i-1] = -1;
			} else if ( v[i+1] != 0){
				u[i-1] = -1;
			} else {
				u[i+1] = 1;
			}
		}
	}
	v = u;
}
int main(){
	int n, p;
	while(cin >> n){
		vector<int> v (n);
		cin >> p;
		int rightBalls = 0, leftBalls = 0, posToSet = 0;
		cin >> rightBalls;
		for(int i = 0; i < rightBalls; ++i){
			cin >> posToSet;
			v[posToSet - 1] = 1;
		}
		cin >> leftBalls;
		for(int i = 0; i < leftBalls; ++i){
			cin >> posToSet;
			v[posToSet -1] = -1;
		}
		for(int i = 0; i < p ; ++i){
			print_vector(v);
			move(v);
		}
	}
}
