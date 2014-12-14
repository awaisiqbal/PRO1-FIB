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

bool es_simetrica(const Matriu& m){
	int size = m.size();
	bool es_sim = true;
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			if(m[i][j] != m[j][i]) return false;
		}
	}
	
	
	return es_sim;
	
}

int main(){
	Matriu m(2,vector<int> (2));
	leer_matriz(m);
	print_matriz(m);
	bool es = es_simetrica(m);
	if(es) cout << "Sí " << endl;
	else cout << "No" << endl;
}
