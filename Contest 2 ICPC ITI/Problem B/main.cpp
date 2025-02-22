#include <iostream>
#include <string>
using namespace std;
int main() {
    string S, T;
    cin >> S >> T;
    int diffCount = 0;
    for (int i = 0; i < 6; i++) {
        if (S[i] != T[i]) {
            diffCount++;
        }
    }

    if (diffCount <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" <<endl;
    }

    return 0;
}