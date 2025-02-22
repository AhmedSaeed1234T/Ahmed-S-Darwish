#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        long long n;
        cin >> n; 

        long long openLockers = static_cast<long long>(sqrt(n));
        
        cout << openLockers << endl; 
    }

    return 0;
}