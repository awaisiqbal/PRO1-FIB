#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& v){
	int size = v.size();
	cout << "[ ";
	for(int i = 0; i < size; ++i){
		cout << v[i] ;
		if(i != size -1)  cout << " , ";
	}
	cout << " ]" << endl;
}

int evaluate(const vector<int>& p, int x){
	int n = p.size();
	--n;
	int sum = p[n];
	for(int i = n -1 ; i >= 0; --i){
		sum = p[i] + (x * sum);
	}
	return sum;
}

int main(){
	vector<int> u  (4);
	u[0] = 3;
	u[1] = 2;
	u[2] = 5;
	u[3] = -1;
	
	
	cout << evaluate(u,3) << endl;
}
