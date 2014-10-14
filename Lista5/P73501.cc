#include <iostream>
using namespace std;

int main(){
	int numbersIntroduced;
	cin >> numbersIntroduced;
	for (int i = 0; i < numbersIntroduced ; ++i){
		int nums, count = 0;
		cin >> nums;
		int lastDigit = nums;
		while(nums != 0){
			if(nums > lastDigit){
				++count;
			}
			
			lastDigit = nums;
			cin >> nums;
		}
		cout << count << endl;
	}
}
