#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix; 


void read_matrix(Matrix& sq){
	int rows = sq.size();
	int columns = sq[0].size();
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < columns; ++j){
			cin >> sq[i][j];
		}
	}
}
bool estan_todos(const Matrix& sq){
	int n = sq.size();
	vector<bool> esta(n * n + 1, false);
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			esta[sq[i][j]] = true;
		}
	}
	
	for(int i = 1; i < n*n+1; ++i){
		if(not(esta[i])) return false;
	}
	return true;
};

int suma_primera_fila(const Matrix& sq){
	int suma = 0, n = sq.size();
	for(int i = 0; i < n; ++i){
		suma += sq[0][i];
	}
	return suma;
};

bool comprobar_filas_columna(const Matrix& sq,int suma){
	int n = sq.size();
	for(int i = 0; i < n; ++i){
		int sum = 0, sum2 = 0;
		for(int j = 0; j < n; ++j){
			sum += sq[i][j];
			sum2 += sq[j][i];
		}
		if (suma != sum or suma != sum2) return false;
	}
	return true;
};

bool comprobar_diago(const Matrix& sq,int suma){
	int sum = 0, sum2 = 0, n = sq.size();
	for(int i = 0; i < n; ++i){
		sum += sq[i][i];
		sum2 += sq[i][(n - i) - 1];
		
	}
	if( suma == sum and suma == sum2){
		return true;
	}
	else {
		return false;
	}
};

bool magic(const Matrix& sq){
	if(not(estan_todos(sq))){
		//cout << "estan_todos  FALSE" << endl;
		 return false;
	} else {
		int suma = suma_primera_fila(sq);
		if(comprobar_filas_columna(sq,suma)){
			//cout << "comp_fila_columna  TRUE" << endl;
				if(comprobar_diago(sq,suma)){
					//cout << "comprobar_diago  TRUE" << endl;
						return true;
				}
		} 
		return false;
	}
}

int main(){
	int n;
	while(cin >> n){
		Matrix square(n,Row(n));
		read_matrix(square);
		if(magic(square)){
			 cout << "si" << endl;
		} else {
			cout << "no" << endl;
		}
		
		
	}
}

