#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > matriz;


int main(){
	int m, salida, pos_vaca;
	cin >> m >> salida >> pos_vaca;
	matriz v (m, vector<char> (100,'.'));
	for(int i = 0; i < m; ++i){
		v[i][0] = '|';
	}
	v[salida][0] = '=';
	v[pos_vaca][1] = 'V';
	
	
	int pasos = 1, dir = 1, columna = 2;
	 while(pos_vaca != salida){
		 int i = 0;
		 while(pos_vaca != salida and i < pasos){
			 pos_vaca += dir;
			 v[pos_vaca][columna] = 'V';
			 ++i;
			 ++columna;
		 }
		 dir *= -1;
		 pasos *= 2;
		 
	 }
	 
	 for(int i = 0 ; i < m; ++i){
		 for(int j = 0 ; j < columna; ++j){
			 cout << v[i][j];
		 }
		 cout << endl;
	 }
	
}
