#include <iostream>
#include <vector>
using namespace std;
     
struct Info {
	string nom, hora;
};

string busca(string nom, const vector<Info>& v) {
	int pos;
	int izqd = 0;
	int der = v.size() - 1;
	
	while (izqd <= der) {
		pos = (izqd + der)/2;
		if (nom < v[pos].nom) der = pos - 1;
		else if (nom > v[pos].nom) izqd = pos + 1;
		else {
			if (pos > 0 and nom == v[pos - 1].nom){
				return "???";
			}
			int size = v.size();
			if (pos + 1 < size and nom == v[pos + 1].nom){
				return "???";
			} else {
				return v[pos].hora;
			}
		}
	}
	return "ABANDONA";
}
     
int main() {
	int n;
	cin >> n;
	vector<Info> L1(n);
	for (int i = 0; i < n; ++i) {
		cin >> L1[i].nom >> L1[i].hora;
	}
	string DNI, nom;
	while (cin >> DNI >> nom) {
		cout << DNI << " " << busca(nom, L1) << endl;
	}
}

