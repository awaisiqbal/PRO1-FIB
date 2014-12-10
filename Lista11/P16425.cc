#include<iostream>
using namespace std;

bool isPrime(int number){
	bool prime=true;
        for (int j=2; j*j<= number; j++){
            if (number % j == 0){
                prime=false;
                break;    
            }
        } 
	return prime;
}

int main(){ 
	int n;
	while(cin >> n){
		int counter=0,current_number=2;
		while (counter < n){
			if (isPrime(current_number)){
				cout << current_number ;
				if(counter != n-1) cout << ",";
				counter++;
			}
			current_number++;
		}
		cout << endl;
	}
}
