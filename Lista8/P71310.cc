#include <iostream>
#include <vector>
using namespace std;


double scalar_product(const vector<double>& u, const vector<double>& v){
	int size = u.size();
	double ret = 0;
	for(int i = 0;i < size; ++i){
		ret += u[i] * v[i];
	}
	return ret;
}

int main(){
	vector<double> u  (5);
	u[0] = 1;
	u[1] = 3;
	u[2] = -5;
	u[3] = 3;
	u[4] = 0;
	
	vector<double> v  (5);
	v[0] = 4;
	v[1] = -2;
	v[2] = -1;
	v[3] = 0;
	v[4] = 0;
	
	cout << scalar_product(u,v) << endl;
}
