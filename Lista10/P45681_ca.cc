#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Taula;

void LlegirCamp (Taula& C){
	int size1=  C.size(), size2= C[0].size();
	for (int i=0; i < size1; ++i){
		for (int j=0; j < size2; ++j){
			cin >> C[i][j];
		}
	}
}

void avanzar (int& WF,int& WC, int IF, int IC, int& Deix, Taula& C){
	while (C[WF][WC] != 'X'){
		if (C[WF][WC] != '.'){
			Deix += C[WF][WC] - '0';
			C[WF][WC] = '.'; 
		}
	WF += IF;
	WC += IC;
	}
	WF= WF-IF;
	WC= WC-IC;
}


void Comptar_Deixalles (int WF, int WC, int& Deix, Taula& C){
	Deix = 0;
	string p;
	cin >> p;
	int size = p.length();
	for (int i=0; i < size; ++i){
		if (p[i] == 'N'){
			int IF = -1;
			int IC = 0;
			avanzar(WF,WC,IF,IC,Deix,C);
		} else if (p[i] == 'S'){
			int IF = +1;
			int IC = 0;
			avanzar(WF,WC,IF,IC,Deix,C);
		} else if (p[i] == 'E'){
			int IF = 0;
			int IC = +1;
			avanzar(WF,WC,IF,IC,Deix,C);
		} else if (p[i] == 'O'){
			int IF = 0;
			int IC = -1;
			avanzar(WF,WC,IF,IC,Deix,C);
		} else {
			int IF = 0;
			int IC = -1;
			avanzar(WF,WC,IF,IC,Deix,C);
		}
	}
}


int main(){
	int f, c;
	int cas=0;
	while (cin >> f >> c){
		++cas;
		Taula Camp(f, vector<char> (c));
		LlegirCamp(Camp);
		int WalleF, WalleC;
		cin >> WalleF >> WalleC;
		int D;
		Comptar_Deixalles(WalleF,WalleC,D,Camp);
		cout << "Cas " << cas << ": " << D << endl;
	}
}

