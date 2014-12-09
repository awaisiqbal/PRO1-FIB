#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Tablero;

struct Bola {
  int x_ant, y_ant;  // Posicion anterior de la bola
  int x_act, y_act;  // Posicion actual de la bola
  int x_sig, y_sig;  // Posicion siguiente de la bola
};

Tablero crear_tauler(int n, int m, Bola& b){
	Tablero t (n, vector<char>(m,'.'));
	b.x_ant = b.y_ant = -1;
	
	cin >> b.x_act >> b.y_act;
	t[b.x_act][b.y_act] = 'B';
	
	if(b.x_act == 0){
		b.x_sig = b.x_act + 1;
	} else {
		b.x_sig = b.x_act -1;
	}
	if(b.y_act == 0){
		b.y_sig = b.y_act + 1;
	} else {
		b.y_sig = b.y_act -1;
	}
	int x, y;
	cin >> x >> y;
	t[x][y] = 'b';
	return t;
	
}

bool topa_banda(const Bola& b, int n, int m){
	return (b.x_act == 0 or b.x_act == n-1 or b.y_act == 0 or b.y_act == m-1);
}
bool topa_cantonada(const Bola& b, int n, int m){
	return ((b.x_act == 0 or b.x_act == n-1) and (b.y_act == 0 or b.y_act == m-1));
}

void mover_hasta_chocar (Tablero& t, Bola& b){
	int n = t.size();
	int m = t[0].size();
	int dx = b.x_sig - b.x_act;
	int dy = b.y_sig - b.y_act;
	
	bool banda = false;
	bool cantonada = false;
	bool bola = false;
	
	while(not banda and not cantonada and not bola){
		b.x_ant = b.x_act;
		b.y_ant = b.y_act;
		b.x_act = b.x_sig;
		b.y_act = b.y_sig;
		
		
		banda = topa_banda(b,n,m);
		cantonada = topa_cantonada(b,n,m);
		bola = (t[b.x_act][b.y_act] == 'b');
		
		if(not banda){
			b.x_sig += dx;
			b.y_sig += dy;
		} else if (not cantonada){
			if(b.x_act == 0) {
				++b.x_sig;
				if(b.y_ant < b.y_act){
					++b.y_sig;
				} else {
					--b.y_sig;
				}
			} else if (b.x_act == n-1){
				--b.x_sig;
				if(b.y_ant < b.y_act){
					++b.y_sig;
				} else {
					--b.y_sig;
				}
			} else if (b.y_act == 0){
				++b.y_sig;
				if(b.x_ant < b.x_act){
					++b.x_sig;
				} else {
					--b.x_sig;
				}
			} else {
				--b.y_sig;
				if(b.x_ant < b.x_act){
					++b.x_sig;
				} else {
					--b.x_sig;
				}
			}
			
		}
		t[b.x_ant][b.y_ant] = '=';
		t[b.x_act][b.y_act] = 'B';
	}
	
}

void imprimir_tablero(const Tablero& t){
	int size = t.size(), sizeC = t[0].size();
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < sizeC; ++j){
			cout << t[i][j];
		}
		cout << endl;
	}
	cout << endl;
}


int main(){
	int n, m;
	while(cin >> n >> m){
		Bola b ;
		Tablero t = crear_tauler(n, m, b);
		
		bool aturar = false;
		bool carambola = false;
		int xocs = 0;
		while(not aturar and not carambola){
			mover_hasta_chocar(t, b);
			
			if(topa_cantonada(b,n,m)){
				aturar = true;
			} else if (topa_banda(b,n,m)){
				cout << "(" << b.x_act << "," << b.y_act << ")";
				++xocs;
				if(xocs > 3) aturar = true;
				
			} else {
				if(xocs < 3) {
					aturar = true;
				} else {
					carambola = true;
				}
			}
		}
		if(carambola){
			cout << ": si" << endl;
		} else {
			cout << ": no" << endl;
		}
		imprimir_tablero(t);
		
	}
}
