#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int num = 100;
    int d1, d2, d3, sum;

    cout << "Enter n: ";
    cin >> n;

    while (num <= 999) {
        d1 = num / 100;
        d2 = (num / 10) % 10;
        d3 = num % 10;

        sum = d1 + d2 + d3;

        if (sum == n) {
            count = count + 1;
        }
        num = num + 1;
        
    }

    cout << "Result: " << count;
    return 0;
}
