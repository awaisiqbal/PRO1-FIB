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
	double x = v[0].x ;
	double y = v[0].y ;
	for(int i = 1; i < size ;++i){
		if(v[i].x != x or v[i].y != y) return true;
	}
	return false;
}


bool checkCond2(const vector<Punto>& v){
	double sum_x = 0, sum_y = 0;
	int size = v.size();
	for(int i = 0; i < size ;++i){
		sum_x += v[i].x;
		sum_y += v[i].y;
	}
	return sum_x == sum_y;
}

bool checkCond3(const vector<Punto>& v,const Punto& p){
	int size = v.size();
	double x = p.x ;
	double y = p.y ;
	for(int i = 0; i < size ;++i){
		if(v[i].x == x and v[i].y == y) return false;
	}
	return true;
}

bool baricentro (const vector<Punto>& v, Punto& b){
	double sum_x = 0, sum_y = 0;
	int size = v.size();
	for(int i = 0; i < size ;++i){
		sum_x += v[i].x;
		sum_y += v[i].y;
	}
	b.x = sum_x / size;
	b.y = sum_y / size;
	cout.setf(ios::fixed);
	cout.precision(2); 
	cout << "baricentro: ("<< b.x << "," << b.y << ")" << endl;
	return true;
}

int main(){
	int n;
	while(cin >> n){
		vector<Punto> v = get_vector(n);
		Punto p;
		baricentro(v,p);
		if(not(checkCond1(v))){
			cout << "el vector no cumple la propiedad 1" << endl;
		} else if (not(checkCond2(v))){
			cout << "el vector no cumple la propiedad 2" << endl;
		} else if(not (checkCond3(v,p))){
			cout << "el vector no cumple la propiedad 3" << endl;
		} else {
			cout << "vector normalizado" << endl;
		}
		
	}
	
}
