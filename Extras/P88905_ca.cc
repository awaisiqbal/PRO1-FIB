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

Matriu producte(const Matriu& a, const Matriu& b){
	
	int k = a.size(), n = b[0].size(), m = a[0].size();
	Matriu mat(k,vector<int>(n));
	for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                mat[i][j] += a[i][z] * b[z][j];
	return mat;
}
int main(){
};
