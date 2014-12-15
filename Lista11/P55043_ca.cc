#include <iostream>
#include <vector>
 
using namespace std;
 
int suma_digitos(int a) {
    int suma = a;
    while (a > 0) {
        suma += a%10;
        a /= 10;
    }
    return suma;
}
int trobada_de_rius(int n) {
    int a = 1;
    int b = 3;
    int c = 9;
    while (n != a and n != b and n != c) {
 
        while (n > a) a = suma_digitos(a);
        while (n > b) b = suma_digitos(b);
        while (n > c) c = suma_digitos(c);
 
        if (n != a and n != b and n != c) n = suma_digitos(n);
    }
    return n;
}
 
int main() {
    int entrada;
    cin >> entrada;
    cout << trobada_de_rius(entrada);
}
