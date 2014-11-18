#include <iostream>
using namespace std;
 
struct Fraccio {
    int num, den; // sempre estrictament positius
};
 
int mcd(int a, int b) {
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
 
Fraccio suma(const Fraccio& x, const Fraccio& y);
 
int main(){
    Fraccio x;
    Fraccio y;
    y.num = 0;
    y.den = 1;
    char c;
    bool seguir = true;
    while (seguir and cin >> x.num >> c >> x.den >> c) {
        if (c == '=') seguir = false;
        y.num = y.num*x.den + y.den*x.num;
        y.den = y.den*x.den;
        y = suma(x, y);
    }
    if (y.num == 0) cout << 0 << endl;
    else cout << y.num << '/' << y.den << endl;
 
}
 
 
Fraccio suma(const Fraccio& x, const Fraccio& y) {
    Fraccio resultado = x;
    int minim = mcd(y.num, y.den);
    resultado.num = y.num/minim;
    resultado.den = y.den/minim;
    return resultado;
}
