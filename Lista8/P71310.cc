#include <iostream>
#include <vector>
using namespace std;


double scalar_product(const vector<double>& u, const vector<double>& v){
	int size = u.size();
	double ret = 0;
	for(int i = 0;i <= size; ++i){
		ret += u[i] * v[i];
	}
	return ret;
}

int main(){
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
	
	cout << scalar_product(u,v) << endl;
}
