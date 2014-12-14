#include <iostream>
#include <vector>
using namespace std;
     
typedef vector<int> Row;
typedef vector<Row> Matrix;
     
struct Info {
	int min, max;
};
     
int getNumCapas(int f, int c){
	if(f > c){
		f = c;
	}
	return double(f)/2 + 0.5;
}
     
void getInfoCapa(const Matrix& m, vector<Info>& info, const int capas, int capaNum, const int f, const int c){
	if(capaNum < capas){
		Info capa;
		capa.min = m[capaNum][capaNum];
		capa.max = capa.min;
		for(int i = capaNum; i < f-capaNum; ++i){
			for(int j = capaNum; j < c-capaNum; ++j){
				if(i == capaNum || i == f-capaNum-1 || j == capaNum || j == c-capaNum-1){
					if(m[i][j] > capa.max){
						capa.max = m[i][j];
					}
					if(m[i][j] < capa.min){
						capa.min = m[i][j];
					}
				}
			}
		}
		info[capaNum] = capa;
		getInfoCapa(m, info, capas, capaNum+1, f, c);
	}
}
     
vector<Info> info_capes(const Matrix& m){
	int f = m.size(), c = m[0].size();
	vector<Info> info(getNumCapas(f, c));
	getInfoCapa(m, info, info.size(), 0, f, c);
	return info;
}
     
void print(vector<Info>& info){
	int size = info.size();
	for(int i = 0; i < size; ++i){
		cout << " " << info[i].min << "," << info[i].max;
	}
	cout << endl;
}
     
int main(){
	int num = 1, f, c;
	while(cin >> f >> c){
		Matrix m(f, Row(c));
		for(int i = 0; i < f; ++i){
			for(int j = 0; j < c; ++j){
				cin >> m[i][j];
			}
		}
		vector<Info> info = info_capes(m);
		cout << "matriu " << num << ":";
		print(info);
		++num;
	}
}

