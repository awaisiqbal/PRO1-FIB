#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<char> >Matriucar;
int main(){
	int cas;
	cin >> cas;
	for(int h = 0; h < cas; ++h){
		int n, x, y;
		cin >> n >> x >> y;
		Matriucar a(n, vector<char>(n));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> a[i][j];
			}
		}
		
	vector<vector<bool> > aux(n ,vector<bool> (n,false));
	bool trobat = false;
	int i = x, j = y;
	while(not trobat){
		//cout << "x: " << i << "  ,  y: " << j << endl;
		
			if (a[i][j] == 'N'){
				aux[i][j] = true;
				--i;
			}else if (a[i][j] == 'S'){
				aux[i][j] = true;
				++i;   
			} else if (a[i][j] == 'E'){
				aux[i][j] = true;
				++j;
			} else if (a[i][j] == 'W'){
				aux[i][j] = true;
				--j;   
			}
			//cout << "x2:" << i << "  ,  y2:" << j << endl;
			if( (i < 0 or i == n) or (j < 0 or j == n)){
				cout << "escape" << endl;
				trobat = true;
			}else if (aux[i][j]){
				cout << "no escape" << endl;
				trobat = true; 
			} else if (a[i][j] == 'X'){
				cout << "kaputt" << endl;
				trobat = true;
			} else {  
			}
		}
	}
}
