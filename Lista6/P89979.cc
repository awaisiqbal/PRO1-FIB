#include <iostream>
using namespace std;

bool isIncreasing(int n);
int main(){
	int index = 0;
	int n;
	bool found = false;
	while(not(found) and cin >> n){
		++index;
		found = isIncreasing(n);
		
	}
	if(found){
		cout << "The first line in increasing order is " << index << "." << endl;
	} else {
		cout << "There is no line in increasing order." << endl;
	}
	
}
