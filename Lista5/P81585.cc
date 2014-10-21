#include <iostream>
using namespace std;

int main(){
	int num = 0;
	while(cin >> num){
		
		int sum = 0; //sum of all the numers introduced
		int max = -1; //the max number in introduced
		for(int i = 0;i < num ; ++i){ 
			int n = 0;
			cin >> n;
			sum+=n;
			if(n > max)
				max=n;
		}
		//chekc if the max is equal to the sum of the rest.
		bool found = (sum  - max) == max;
		if(found){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
		
	}
	
}
