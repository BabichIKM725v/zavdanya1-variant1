#include <iostream>
using namespace std;

int main() {
    int a, b, c, riznitsya;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        if (b > c) { 
            riznitsya = b - c;
        } 
        else { 
            riznitsya = c - b;    
        }
    } 
    else if (b >= a && b >= c) {
        if (a > c){ 
            riznitsya = a - c;
        }
        else {
            riznitsya = c - a;
        }
    } 
    else {
        if (a > b){ 
            riznitsya = a - b;
        } 
        else { 
            riznitsya = b - a;
        }
    }

    cout << "Riznitsya: " << riznitsya;
    return 0;
}
