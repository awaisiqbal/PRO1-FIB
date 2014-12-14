#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;

void print_matriz(Matriu& m){
	cout << "-----" << endl;
	int size = m.size(), size2 = m[0].size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size2; ++j){
			cout << m[i][j];
		}
		cout << endl;
	}
	cout << "-----" << endl;
}
void leer_matriz(Matriu& m){
	int size = m.size(), size2 = m[0].size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size2; ++j){
			cin >> m[i][j];
		}
	}
}

void transposa(Matriu& m){
	int size = m.size();
	Matriu m2(size,vector<int> (size));
	for(int i = 0 ; i < size ; ++i){
		for(int j = 0; j < size; ++j){
			m2[j][i] = m [i][j];
		}
	}
	//print_matriz(m2);
	m = m2;
	
}



int main(){
	Matriu m(2,vector<int> (2));
	leer_matriz(m);
	print_matriz(m);
	transposa(m);
	print_matriz(m);
}
