#include <iostream>
#include <vector>
using namespace std;

// 		ALTERNATIVA CON INT

void print_vector(const vector<int>& v){
	int size = v.size();
	for(int i = 0; i < size; ++i){
		if(v[i] == 0){
			cout << ".";
		} else if (v[i] == -1) {
			cout << "<";
		} else {
			cout << ">";
		}
	}
	cout << endl;
	 
}
void move(vector<int>& v){
	int size = v.size();
	vector<int> u (size);
	for(int i = 0; i < size ; ++i){
		if(v[i] == -1){
			if(i == 0 ){
				u[i+1] = 1;
			} else if ( v[i-1] != 0){
				u[i+1] = 1;
			} else {
				u[i-1] = -1;
			}
		} else if(v[i] == 1){
			if(i == size-1){
				u[i-1] = -1;
			} else if ( v[i+1] != 0){
				u[i-1] = -1;
			} else {
				u[i+1] = 1;
			}
		}
	}
	v = u;
}
int main(){
	int n, p;
	while(cin >> n){
		vector<int> v (n);
		cin >> p;
		int rightBalls = 0, leftBalls = 0, posToSet = 0;
		cin >> rightBalls;
		for(int i = 0; i < rightBalls; ++i){
			cin >> posToSet;
			v[posToSet - 1] = 1;
		}
		cin >> leftBalls;
		for(int i = 0; i < leftBalls; ++i){
			cin >> posToSet;
			v[posToSet -1] = -1;
		}
		for(int i = 0; i < p ; ++i){
			print_vector(v);
			move(v);
		}
		cout << endl;
	}
}

// 		ALTERNATIVA CON CHAR

/*
void paso(vector<char>& v, int n);

int main(){
	int n,p;
	while(cin >> n >> p){
		vector<char> v (n,'.');
		int bd;
		cin >> bd;
		if(bd > 0){
			for(int i = 0; i < bd; ++i){
				int pos;
				cin >> pos;
				v[pos - 1] = '>';
			}
		}
		int be;
		cin >> be;
		if(be > 0){
			for(int i = 0; i < be; ++i){
				int pos;
				cin >> pos;
				v[pos - 1] = '<';
			}
		}
		for(int i = 0; i < n; ++i) cout << v[i];
		cout << endl;
		for(int i = 0; i < p - 1; ++i){
			paso(v,n);
			for(int l = 0; l < n; ++l){
				cout << v[l];
			}
			cout << endl;
		}
		cout << endl;
	}
}

void paso(vector <char>& v, int n){
	vector <char> p;
	p = v;
	for(int i = 0; i < n; ++i){
		if(p[i] == '<' and (p[i - 1] == '>' or i == 0)){
			v[i] = '.';
			v[i + 1] = '>';
		}
		else if(p[i] == '>' and (p[i + 1] == '<' or i == n-1)){
			v[i] = '.';
			v[i - 1] = '<';
		}
		else if (p[i] == '<' and p[i - 1] == '.' ){
			v[i] = '.';
			v[i - 1] = '<';
		}
		else if (p[i] == '>' and p[i + 1] == '.' ){
			v[i] = '.';
			v[i + 1] = '>';
		}
	}
}
*/
