#include <iostream>
#include <vector>

using namespace std;

typedef vector<string> Fila;
typedef vector<Fila> Matriu;

int nombre_de_paraules(const Matriu& m, char c, int k){
	int count = 0;
	int size = m.size();
	for(int i = 0 ; i < size ; ++i){
		int sizeF = m[i].size();
		for(int j = 0; j < sizeF; ++j){
			int stringSize = (m[i][j]).size();
			//cout << m[i][j] << " : " << stringSize << endl;
			if(stringSize >= k)
				if((m[i][j])[k] == c) ++count;
		}
	}
	return count;
}
void leer_matriz(Matriu& m){
	int size = m.size(), size2 = m[0].size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size2; ++j){
			cin >> m[i][j];
		}
	}
}

int main(){
	Matriu m(2,Fila(2));
	leer_matriz(m);
	int n = nombre_de_paraules(m,'a',2);
	cout << n << endl;
}
