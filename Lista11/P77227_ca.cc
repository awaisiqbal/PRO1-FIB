#include <iostream>
#include <vector>
 
using namespace std;

string sortida(int p, vector<int>& v){
	if(v[p] == 0) return "mai";
	int x = p + v[p];
	v[p] = 0;
	if(x < 0){
		return "esquerra";
	}
	if(x >= v.size()){
		return "dreta";
	}
	return sortida(x,v);
}
