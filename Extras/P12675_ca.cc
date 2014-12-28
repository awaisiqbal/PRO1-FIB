#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
	int n = X.size();
	int m = Y.size();
	int i = 0;
	int j = 0;
	int elementos_en_comun = 0;
	while (j != n and i != m) {
		if (X[j] == Y[i]) {
			++elementos_en_comun;
			++j;
			++i;
		}else if (X[j] < Y[i]){
			++j;
		} else {
			++i;
		}
	}
		return elementos_en_comun;
}

int main(){
	return 0;
}
