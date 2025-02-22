#include <iostream>
#include <string>
#include <vector>
using namespace std;
long long getCommonPrefixLength(const string &a, const string &b) {
    int minLength = min(a.size(), b.size());
    int commonLength = 0;
    while (commonLength < minLength && a[commonLength] == b[commonLength]) {
        ++commonLength;
    }
    return commonLength;
}
int main() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {

        cin >> strings[i];
    }
    long long commonPrefixLength = strings[0].size();
    for (int i = 1; i < n; i++) {
        commonPrefixLength = getCommonPrefixLength(strings[0], strings[i]);
        if (commonPrefixLength == 0) break; 
    }
    long long totalOperations = 0;
    for (int i = 0; i < n; i++) {
        totalOperations += (strings[i].size() - commonPrefixLength);
    }
    cout << totalOperations; 
    return 0;
}