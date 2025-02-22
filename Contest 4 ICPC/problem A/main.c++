#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int lengths[3] = {a, b, c};
    sort(lengths, lengths + 3);

    int needed = lengths[2] - (lengths[0] + lengths[1]) + 1;

    if (needed <= 0) {
        cout << 0 << endl;
    } else {
        cout << needed << endl;
    }

    return 0;
}