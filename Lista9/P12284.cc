#include <iostream>
#include <vector>
using namespace std;

int main(){
		int k,n;
		while(cin >> n >> k){
			for(int i = 0; i < n)
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
}

