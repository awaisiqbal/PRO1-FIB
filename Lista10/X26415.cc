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

void print_matriz(Matriz& m){
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
struct pos{
	int x;
	int y;
	int dirv;
	int dirh;
};

int main(){
	//int z;
	//cin >> z;
	//for(int i = 0; i < z; ++i){
		int n, v;
		cin >> n >> v;
		Matriz m(n,Fila(v));
		leer_matriz(m);
		//print_matriz(m);
		cout << "----"<< endl;
		pos jug1, jug2;
		jug1.y = 0;
		jug1.x = 0;
		jug1.dirh = 1;
		jug1.dirv = 1;
		
		jug2.y = n-1;
		jug2.x = v-1;
		jug2.dirh = -1;
		jug2.dirv = -1;
		
		int turno = 1;
		while(jug1.x != jug2.x and jug1.y != jug2.y){
			if(turno == 1){
				int i = jug1.x, j = jug1.y;
				if((++j) > n-1){
					++i;
				}
			} else {
				
			}
			
		}
		
}
	
	/*
	if(turno == 1){
				for(int j = 0; j < n; ++j){
					int factor, i;
					if(j % 2 == 0){
						factor = 1;
						i = 0;
					} else {
						factor = -1;
						i = v - 1;
					}
					while(0 <= i and i < v){	
						cout << "1: " << m[j][i] << endl;
						i += factor;
					}
				}
				turno = 2;
			} else {
			
				for(int j = n -1; j >= 0; --j){
					int factor, i;
					if(j % 2 != 0){
						factor = 1;
						i = 0;
					} else {
						factor = -1;
						i = v - 1;
					}
					while(0 <= i and i < v){
						cout << "2: " << m[j][i] << endl;
						i += factor;
					}
				}
				turno = 1;	
			}

		
		
		*/
