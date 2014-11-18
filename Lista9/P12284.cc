#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Palabra{
	string text;
	int count;
};

bool orden_dec_frec(Palabra f1,Palabra f2){
	return f1.count > f2.count;
}

int main(){
	string s;
	int n,k;
	while(cin >> n >> k){
		vector<string> paraules (n);
		for(int i = 0 ; i < n; ++i){
			cin >> paraules[i];
		}
		sort(paraules.begin(),paraules.end());
		//vector <Palabra> freque = calcular_dif(paraules);
		sort(paraules,orden_dec_frec);
	}
}

