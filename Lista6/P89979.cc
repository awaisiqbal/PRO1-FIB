#include <iostream>
using namespace std;

bool es_creixent(int n){
	if (n==0){
		return true;
	} else {
		string ant;
		cin >> ant;
		bool creix = true;
		for (int i=2; i <= n; ++i){
			string act;
			cin >> act;
			creix = creix and ant <= act;
			ant = act;
		}
		return creix;
	}
}

int main(){
	int n,ind=0; bool found = false;
	while (not(found) && cin >> n){
		++ind;
		found = es_creixent(n);
	}
	if (found){
		cout << "The first line in increasing order is " << ind << "." << endl;
	} else {
		cout << "There is no line in increasing order." << endl;
	}
}
