#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right){
	
	if(right < left){
		return -1;
	}else {
		int mid = left + ((right - left) / 2);
		if(v[mid] > x){
			return position(x,v,left,mid - 1);
		} else if (v[mid] < x) {
			return position(x,v,mid +1 , right);
		} else {
			return mid;
		}
	}
}

int main(){
	int n ;
	while(cin >> n){
		vector<double> v (n);
		for(int i = 0 ; i < n; ++i){
			cout <<  i <<": " ;
			cin >> v[i];
		}
		int search_number, leftN, rightN;
		cout << "search; " << endl;
		cin >> search_number >> leftN >> rightN;
		 cout << search_number << " , " << leftN << " , " << rightN << endl;
		int c = position(search_number, v, leftN, rightN);
		cout << "Pos: " <<  c << endl;
	}
	
	
	
}


