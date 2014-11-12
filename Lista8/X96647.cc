#include <iostream>
#include <vector>
using namespace std;


struct Punto {
	double x,y;
};

vector<Punto> get_vector(int n){
	vector<Punto> v (n);
	for(int i = 0; i < n; ++i){
		Punto u ;
		cin >> u.x >> u.y;
		v[i] = u;
	}
	return v;
}

bool checkCond1(const vector<Punto>& v){
	int size = v.size();
	int x = v[0].x ;
	int y = v[0].y ;
	for(int i = 1; i < size ;++i){
		if(v[i].x != x or v[i].y != y) return true;
	}
	return false;
}


bool checkCond2(const vector<Punto>& v){
	int sum_x = 0, sum_y = 0;
	int size = v.size();
	for(int i = 1; i < size ;++i){
		sum_x += v[i].x;
		sum_y += v[i].y;
	}
	return sum_x == sum_y;
}

bool checkCond3(){
	return false;
}

bool baricentro (const vector<Punto>& v, Punto& b){
	return false;
}

int main(){
	int n;
	while(cin >> n){
		vector<Punto> v = get_vector(n);
		if(not(checkCond1(v))){
			cout << "el vector no cumple la propiedad 1" << endl;
		} else if (not(checkCond2(v))){
			cout << "el vector no cumple la propiedad 2" << endl;
		} else if(not (checkCond3(v))){
			cout << "el vector no cumple la propiedad 3" << endl;
		} else {
			cout << "vector normalizado" << endl;
		}
		
	}
	
}
