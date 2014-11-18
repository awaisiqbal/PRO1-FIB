#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Palabra{
	string text;
	int count;
};

bool comp(const Palabra& f1,const Palabra& f2){
	return f1.count > f2.count;
}
void printVector(vector<Palabra> v,int k){
	// k = v.size();
	for(int i = 0; i < k; ++i ){
		cout << v[i].text << endl;
			//cout << "Palabra: " << v[i].text << "   count: " << v[i].count << endl;
	}
	cout << "----------"<< endl;
}

vector<Palabra> diferents(const vector<string>& v){
	int size = v.size();
	if(size == 1){
		vector<Palabra> pal (size);
		Palabra p ;
		p.text = v[0];
		p.count = 0;
		pal[0] = p;
		return pal;
	} else {
		string last = v[0];
		int count_Diferent = 1,count = 1;
	
	
		for(int i = 1; i < size; ++i){
			if(last != v[i]){
				++count;
				last = v[i];
			}
		}	
		last = v[0];
		vector<Palabra> pal (count);
		count = 0;
		for(int i = 1; i < size; ++i){
			if(last != v[i]){
				Palabra p ;
				p.text = last;
				p.count = count_Diferent;
				pal[count] = p;
				++count;
				last = v[i];
				count_Diferent = 1;
			} else {
				++count_Diferent;
			}
		
			if(i == (size-1)){
				Palabra p ;
				p.text = last;
				p.count = count_Diferent;
				pal[count] = p;
			}
		}
	
		return pal; 
	}
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
		vector<Palabra> freque = diferents(paraules);
		sort(freque.begin(),freque.end(),comp);
		//cout << freque.size() << endl;
		printVector(freque,k);
		
	}
}

