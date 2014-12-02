#include <iostream>
#include <vector>
using namespace std;

typedef vector< char> Fila;
typedef vector< Fila > Matriz; 

void leer_matriz(Matriz& m){
	int i ,j;
	while(cin >> i >> j){
		m[i][j] = 'B';
	}
}
void escribir_matriz(Matriz& m){
	int size = m.size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			cout << m[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
int revisar (const Matriz& m, int i, int j, int di, int dj){
	int size = m.size();
	int p = 0;
	if((0 <= i + di and i + di < size) and (0 <= j + dj and j + dj < size)){
		if(m[i + di][j + dj] == 'B'){
			p = 1;
		} 
	}
	return p;
}
int contar_bac(const Matriz& m,int x, int y){
	int s = 0;
	for(int i = -1; i <= 1 ; ++i ){
		for(int j = -1; j <= 1 ; ++j ){
				s += revisar(m,x,y,i,j);
		}
	}
	
	return s;
}

int main(){
	int n, v;
	cin >> n >> v;
	Matriz m(n,Fila(n,'.'));
	leer_matriz(m);
	escribir_matriz(m); // imprimir la matriz inicial
	int k = 1;
	while(k <= v ){
		Matriz aux = m;
		for(int j = 0; j < n; ++j){
			int factor, i;
			if(j % 2 == 0){
				factor = 1;
				i = 0;
			} else {
				factor = -1;
				i = n - 1;
			}
			while(0 <= i and i < n){
				
				int bac_adj = contar_bac(m,i,j);
				if(m[i][j] == 'B'){
					--bac_adj;
				} 
				if(m[i][j] == '.' and bac_adj == 3){
					
					m[i][j] = 'B';
				} else if ( m[i][j] == 'B' and bac_adj < 2) {
					m[i][j] = '.';
				}
				
				i += factor;
			}
		}
		
		if(m != aux or k == v){
			escribir_matriz(m);
		}
		
		
		++k;
	}
}

