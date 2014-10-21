#include <iostream>
using namespace std;

int main(){
	int num = 0;
	cin >> num;
	int firstSum = 0, firstLastNum = 0, count = 1;
	bool first = true;
	while(num != 0){
		int lastNum=0, sum = 0; 
		
		while(num != 0){
			sum	+= num;
			lastNum=num;
			cin >> num;
		}
		
		
		if(lastNum == firstLastNum and sum == firstSum )
			++count;
		// if is the first line just save the variables
		if(first){
			firstSum = sum;
			firstLastNum = lastNum;
			first = false;
		}
		cin >> num;
	}
	cout << count << endl;
}
