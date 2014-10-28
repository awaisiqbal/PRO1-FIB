#include <iostream>
using namespace std;

int main(){
	
	bool principi = false;
	string s;
	int count = 0;
	while(cin >> s and s != "end"){
		if(s == "beginning"){ 
			principi = true;
		 } else if (principi){
			++count;
		 }
	}
	if(principi and s == "end" ){
		cout << count << endl; 
	} else {
		cout << "wrong sequence" << endl;
	}
}
