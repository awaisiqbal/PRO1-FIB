#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
     
struct Parella {
	string par;
	int freq;
};

typedef vector<Parella> Diccionari;
     
void leer_diccionario(Diccionari& dic) {
	int size = dic.size();
	for (int i = 0; i < size; ++i) 
		cin >> dic[i].par >> dic[i].freq;
}

bool cmp(const Parella& a, const Parella& b) {
	if (a.freq == b.freq) return a.par < b.par;
	return a.freq > b.freq;
}

string traduccion_a_numero(const string& s) {
	string traduccion = s;
	int size = s.size();
	for (int i = 0; i < size; ++i) {
		int letra = s[i] - 'A';
		char c;
		if (letra >= 0 and letra <= 2) c = '2';
		else if (letra >= 3 and letra <= 5) c = '3';
		else if (letra >= 6 and letra <= 8) c = '4';
		else if (letra >= 9 and letra <= 11) c = '5';
		else if (letra >= 12 and letra <= 14) c = '6';
		else if (letra >= 15 and letra <= 18) c = '7';
		else if (letra >= 19 and letra <= 21) c = '8';
		else if (letra >= 22 and letra <= 25) c = '9';
		traduccion[i] = c;
	}
	return traduccion;   
}

string endevina(string s, const Diccionari& dic) {
	int size = dic.size();
	for (int i = 0; i < size; ++i) {
		if (s.size() == dic[i].par.size() and s == traduccion_a_numero(dic[i].par))
		return dic[i].par;
	}
	return "???";
}

int main() {
	int n;
	cin >> n;
	Diccionari dic(n);
	leer_diccionario(dic);
	//ordenar diccionario
	sort(dic.begin(), dic.end(), cmp);
	string s;
	while (cin >> s)
		cout << s << ": " << endevina(s, dic) << endl;
}

