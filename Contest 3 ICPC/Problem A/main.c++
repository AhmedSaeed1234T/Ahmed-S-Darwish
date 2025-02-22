#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    
    int need_changes = 0;
    for (int i = 0; i < n; ++i) {
        need_changes += abs(s[i] - t[i]);
    }

    if (need_changes <= k) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
