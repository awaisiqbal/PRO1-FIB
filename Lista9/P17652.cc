#include <iostream>
#include <vector>
using namespace std;


struct Persona { 
	string nom; 
	bool dona; 
	int edat; 
};

int main(){
	int n;
        cin >> n;
        vector<Persona> v(n);
        string genre;
        int max = 0;
        for (int i = 0; i < n; ++i) {
                cin >> v[i].nom >> genre >> v[i].edat;
                if (genre == "dona") v[i].dona = true;
                else v[i].dona = false;
                if (not(v[i].dona)) {
                        if (v[i].edat > max) {
                                max = v[i].edat;
                        }
                }
        }
        for (int j = 0; j < n; ++j) {
                if (v[j].dona and v[j].edat < max) {
                        cout << v[j].nom << " " << v[j].edat << endl;
                }
        }
	
}




