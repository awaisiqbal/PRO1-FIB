#include <iostream>
using namespace std;
 
bool es_capicua(int n, int b) {
	
  int total = 0, nn = n;
  
  while (n > 0) {
    total = total*b + n%b;
    n /= b;
  }
  
  return total == nn;
}
