#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<bool> > Tablero; 


void leer_colocar_barcos(Tablero& t){
	for(int i = 0; i < 10; ++i){
		char c, dir; 
		int pos, lon; 
		cin >> c;
		cin >> pos;
		cin >> lon;
		cin >> dir;
		if(dir == 'h'){
			for(int j= 0; j < lon; ++j){
				t[(c-'a')][(pos-1)+j] = true;
			}
		} else {
			for(int j = 0; j < lon; ++j){
				t[(c-'a')+j][pos-1] = true;
			}
		}
	}
}
void escribir_tauler(Tablero& t){
	int n = t.size();
	cout << "  " ;
	for(int i = 0; i < n; ++i){
		cout << (i+1);
	}
	cout << endl;
	for(int i = 0; i < n; ++i){
		cout << char(i + 'a') << " " ;
		for(int j = 0; j < n; ++j){
			if(t[i][j]){
				cout << "X";
			} else {
				cout << ".";
			}
		}
		cout << endl;
	}
	cout << endl;
}

int distancia(Tablero& t, int c, int f){
	int area = 0;
	bool found = false;
	
	while( not found and (area < 10)){
		++area;
		int i = c - area;
		while(not found and (i <= c + area)){
			int ct = i;
			int j = f - area;
			while(not found and (j <= f + area)){
				int ft = j;
				if(ct < 0) ct = 0;
				if(ct > 9) ct = 9;
				if(ft < 0) ft = 0;
				if(ft > 9) ft = 9;
				
				found = t[ct][ft];
				if((ct == c) and (ft == f)){
					 found = false;
				}
				++j;
			}
			++i;
		}
	}
	return area;			
}

int main(){
	
	Tablero t(10,vector<bool>(10,false));
	leer_colocar_barcos(t);
	escribir_tauler(t);
	char c;
	int i;
	while(cin >> c >> i){
		if(t[c - 'a'][i - 1]){
			cout << c << i << " tocado!" << endl;
		} else {
			cout << c << i << " agua! barco mas cercano a distancia " << distancia(t,c - 'a',i -1) << endl;
		}
		
	}
	
	
}
