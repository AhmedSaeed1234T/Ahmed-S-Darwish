#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S, P;
    cin >> S >> P;

    int n = S.size();
    int m = P.size();
    vector<int> positions;
    for (int i = 0; i <= n - m; i++) {
        if (S.substr(i, m) == P) {
            positions.push_back(i);
            i += m - 1;
        }
    }
    string T = S;
    for (int pos : positions) {
        for (int j = 0; j < m; j++) {
            T[pos + j] = P[j];
        }
    }

    for (int i = 0; i < n; i++) {
        if (find(positions.begin(), positions.end(), i) == positions.end()) {

        }
    }
    cout << T << endl;

    return 0;
}