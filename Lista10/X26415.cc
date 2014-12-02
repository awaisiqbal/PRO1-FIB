#include <iostream>
#include <vector>
using namespace std;

typedef vector< int> Fila;
typedef vector< Fila > Matriz; 

void leer_matriz(Matriz& m){
	int size = m.size(), size2 = m[0].size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size2; ++j){
			cin >> m[i][j];
		}
	}
	
}

int main(){
	int z;
	cin >> z;
	for(int i = 0; i < z; ++i){
		int n, v, puntosJugador1;
		cin >> n >> v;
		Matriz m(n,Fila(v));
		leer_matriz(m);
		
		for(int j = 0; j < v; ++j){
			int factor, k;
			if(j % 2 == 0){
				factor = 1;
				k = 0;
			} else {
				factor = -1;
				k = n - 1;
			}
			while(0 <= i and i < n){
				
				/*
				int bac_adj = contar_bac(m,i,j);
				if(m[i][j] == 'B'){
					--bac_adj;
				} 
				if(m[i][j] == '.' and bac_adj == 3){
					
					m[i][j] = 'B';
				} else if ( m[i][j] == 'B' and bac_adj < 2) {
					m[i][j] = '.';
				}
				*/
				
				i += factor;
			}
		}
		
		
		
		
		for(int i = 0; i < size; ++i){
			for(int j = 0; j < size2; ++j){
				cin >> m[i][j];
			}
		}
		
		
		
		
	}
}
