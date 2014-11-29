#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<bool> > Tablero; 


void leer_colocar_barcos(Tablero& t){
	/*
	char c, dir; 
	int pos, lon; 
	cin >> c;
	cin >> pos;
	cin >> lon;
	cin >> dir;
	cout << "c: " << c << "\tpos: " << pos << "\tlon: " << lon << "\tdir: " << dir <<  endl;*/
	
		for(int i = 0; i < 10; ++i){
			char c, dir; 
			int pos, lon; 
			cin >> c;
			cin >> pos;
			cin >> lon;
			cin >> dir;
			cout << "c: " << c << "\tpos: " << pos << "\tlon: " << lon << "\tdir: " << dir <<  endl;
			if(dir == 'h'){
				cout << "Horizontal" << endl;
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
			//cout << c << i << " agua! barco mas cercano a distancia " << distancia(t,c,i) << endl;
		}
		
	}
	
	
}
