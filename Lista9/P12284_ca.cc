#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
struct Pareja{
	string palabra;
	int aparece; 
};
 
bool compara(Pareja p1,Pareja p2) {
	return p1.aparece > p2.aparece or (p1.aparece == p2.aparece and p1.palabra < p2.palabra); 
}
 
 
int main() {
	int n,k;
	while(cin >> n >> k) {
		vector<string> v(n);
		for(int i = 0; i < n ; ++i) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int iv = 0;
		vector<Pareja> vp(n);
		for(int i = 0 ; i < n ; i++){
			vp[i].palabra = "";
			vp[i].aparece = 0;
		}
		int ivp = 0;
		while(iv < n) {
			vp[ivp].palabra = v[iv];
			while (iv < n and v[iv] == vp[ivp].palabra) {
				vp[ivp].aparece++;
				iv++;
			}
			ivp++;
		}
		sort(vp.begin(),vp.end(),compara);
		for(int i = 0 ; i < k ; ++i){
			cout << vp[i].palabra << endl;
		}
		cout << "----------" << endl;
	}
}

