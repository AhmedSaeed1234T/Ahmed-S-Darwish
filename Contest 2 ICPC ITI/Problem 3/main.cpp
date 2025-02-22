#include <iostream>
#include <numeric>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;
    long long g = gcd(X, Y);
    long long a = Y / g ,b = X / g;
    cout << a * b << endl;
    return 0;
}