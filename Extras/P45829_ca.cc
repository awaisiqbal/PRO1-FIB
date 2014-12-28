#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > matriz;

void borrar_iguales(matriz& campo, int x, int y) {
	int f = campo.size(), c = campo[0].size();
	for (int i = x; i < f ; ++i) {
		if (campo[i][y] != 0) {
			for (int j = y; j < c ; ++j) {
				if (campo[i][j] != 0){
					campo[i][j] = 0;
				} else {
					j = c ;
				}
			}
		} else {
			 i = f ;
		}
	}
}

int main(){
	int f, c;
	while(cin >> f >> c){
		matriz m (f, vector<int>(c,0));
		
		for(int i = 0; i < f; ++i){
			for(int j = 0; j < c; ++j){
				cin >> m[i][j];
			}
		}
		int contador = 0;
		for(int i = 0; i < f; ++i){
			for(int j = 0; j < c; ++j){
				if(m[i][j] != 0){
					borrar_iguales(m,i,j);
					++contador;
				}
				
			}
		}
		
		cout << contador << endl;
		
	}
}
