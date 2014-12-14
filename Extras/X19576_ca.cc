#include <iostream>
#include <vector>
using namespace std;
     
//mina = -1    no mina = 0
typedef vector < vector<int> > Matriu;
     
void adjacents(Matriu& infomines, int i, int j){
	for (int k = i-1; k <= i+1; ++k) {
		for (int l = j-1; l <= j+1; ++l) {
			int size = infomines.size();
			int sizeF = infomines[0].size();
			if (k >= 0 and k < size and l >= 0 and l < sizeF) {
				if (infomines[k][l] == -1) 
					++infomines[i][j];
			}
		}
	}
}

void infomines(const Matriu& a){
	int n=a.size();
	Matriu infomines(n, vector <int>(n,0));
	//omplim la nova matriu
	infomines=a;
	int size = a.size();
	for(int i = 0;i < size; ++i){
		for(int j = 0;j < size; ++j){
			if(infomines[i][j]==0)
				adjacents(infomines,i,j);
		}
	}      
	for(int i=0;i<size;++i){
		if(infomines[i][0]==-1){
			cout << infomines[i][0];
		}else{
			cout << "+" << infomines[i][0];
		}
		for(int j=1;j<size;++j){
			if(infomines[i][j]==-1)
				cout << " " << infomines[i][j];
			else
				cout << " +" << infomines[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
     
//comprobem la precondicio(la primera columna y la ultima han de tindre tot mines)
bool comprobar(const Matriu& a){
	int size = a.size();
	for(int i=0;i<size;++i){
		if(a[i][0]==0)
			return false;
	}
	for(int j=0;j<size;++j){
		if(a[j][a.size()-1]==0)
			return false;
	}
	return true;
}
     
//legim la matriu
void llegir(Matriu& a){
	int size = a.size();
	for(int i=0;i<size;++i){
		for(int j=0;j<size;++j){
			cin >> a[i][j];
		}
	}
}
     
int main(){
	int n,m;
	cin >> m;
	for(int casos=0;casos<m;++casos){
		cin >> n;
		Matriu a(n, vector <int>(n));
		llegir(a);
		if(comprobar(a)){
			infomines(a);
		} else {
			cout << "reject" << endl << endl;
		}
	}      
}

