#include <iostream>
#include <string>
#include <cmath>
using namespace std;
     
struct Circle{
	double centerX;
	double centerY;
	int rad;
};
     
void move(const double &x, const double &y, Circle& c){
	c.centerX += x;
	c.centerY += y;
}
     
void scale(const int &scale_to, Circle& c){
	c.rad *= scale_to;
}

double distancia(const Circle& c1, const Circle& c2) {
    double x1 = c1.centerX - c2.centerX;
    double y1 = c2.centerY - c2.centerY;
    double p = sqrt(x1*x1 + y1*y1);
    return p;
}

int relation(const Circle& c1, const Circle& c2){
	if(distancia(c1,c2) < c1.rad - c2.rad){
		// no overlap
		return 2;
	}
	else if(distancia(c1,c2) < c2.rad - c1.rad){
		// c1 inside c2
		return 1;
	}
	else if (distancia(c1,c2) < c2.rad + c1.rad){
		// c2 inside c1
		return 3;
	}
	else {
		return 0;
	}
}
     
void check(const Circle& c1, const Circle& c2){
	if (relation(c1,c2) == 1) {
		cout << "the first circle is inside the second one" << endl;
	}
	else if (relation(c1,c2) == 2) {
		cout << "the second circle is inside the first one" << endl;
	}
	else if (relation(c1,c2) == 3) {
		cout << "circles intersect" << endl;
	}
	else {
		cout << "circles do not intersect" << endl;
	}
}
     
 int main(){
      Circle one;
      Circle two;
      cin >> one.centerX >> one.centerY >> one.rad >> two.centerX >> two.centerY >> two.rad;
      check(one,two);
      int n, scaleSize;
      double moveX, moveY;
      string action;
      while (cin>>n){
        cin >> action;
        if (action == "scale"){
          cin >> scaleSize;
          if (n == 1) scale(scaleSize,one);
          else scale(scaleSize, two);
          check(one,two);
        }
        if (action == "move"){
          cin >> moveX >> moveY;
         
          if (n == 1){
			   //cout << "PRE: " << one.centerX << " , " << one.centerY << endl;
			   move(moveX, moveY, one);
			   //cout << "POST: " << one.centerX << " , " << one.centerY << endl;
		  }
          else {
			  //cout << "PRE: " << two.centerX << " , " << two.centerY << endl;
			  move(moveX, moveY, two);
			  //cout << "POST: " << two.centerX << " , " << two.centerY << endl;
		  }
          
          check(one,two);
        }
      }
    }

