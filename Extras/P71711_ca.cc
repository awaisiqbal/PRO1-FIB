#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > matriz;

void print_matriz(matriz& m){
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

int main(){
	int f, c, count = 1;
	while( cin >> f >> c){
		matriz m (f, vector<int> (c,0));
		for(int i = 0; i < f; ++i){
			for(int j = 0; j < c; ++j){
				cin >> m[i][j];
			}
		}
		//print_matriz(m);
		int min = -9999;
		int cre = true;
		for(int j = 0; j < c; ++j){
			int i, factor;
			if(j % 2 == 0){
				factor = 1;
				i = 0;
			} else {
				factor = -1;
				i = f - 1;
			}
			while(i >= 0 and i < f){
				
				//tratamiento
				//cout << m[i][j];
				if(m[i][j] > min){
					min = m[i][j];
					i += factor;
				} else {
					cre = false;
					i = f;
					j = c;
				}
				
				
			}
		}
		cout << "matriu " << count << ": " ; 
		if(cre){
			cout << "si" << endl;
		} else {
			cout << "no" << endl;
		}
		
		++count;
	}
}
