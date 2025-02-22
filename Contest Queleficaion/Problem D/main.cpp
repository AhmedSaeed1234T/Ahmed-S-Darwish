#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }

    // Find the element with max frequency
    int max_freq = 0, majority_element = -1;
    for (auto &p : freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
            majority_element = p.first;
        }
    }

    // If max_freq is less than ⌊n/2⌋ + 1, it's impossible
    int needed = (n / 2) + 1;
    if (max_freq < needed) {
        cout << -1 << endl;
        return 0;
    }

    // Count elements already equal to the majority element
    int changes_needed = n - max_freq;
    cout << changes_needed << endl;

    return 0;
}
