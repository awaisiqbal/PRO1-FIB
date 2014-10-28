#include <iostream>
using namespace std;

int main(){
	int num = 0, numToFound = 0, count = 0, foundedNum = 0;
	cin >> numToFound;
	bool found = false;
	cin >> num;
	while(num != -1){
		++count;
		if(count == numToFound){
			found = true;
			foundedNum = num;
		}
		
		cin >> num;
	}
	if(found){
		cout << "At the position " << numToFound << " there is a(n) " << foundedNum << "." << endl;
	} else {
		cout << "Incorrect position." << endl;
	}
}
