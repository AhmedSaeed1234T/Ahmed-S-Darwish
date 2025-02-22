#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string result;
        for (int i = 0; i < n; i++) {
            result += (i % 2 == 0) ? '1' : '0';
        }
                cout << result << endl;
    }
    return 0;
}