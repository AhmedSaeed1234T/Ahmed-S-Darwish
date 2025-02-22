#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<int, int> lastElement; 
    vector<int> a(n);
    vector<int> firstElement(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (lastElement.find(a[i]) == lastElement.end()) {
            firstElement[i] = i; 
        } else {
            firstElement[i] = firstElement[lastElement[a[i]]];
        }
        lastElement[a[i]] = i; 
    }
    int partitions = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        current = max(current, lastElement[a[i]]);
        if (i == current) {
            partitions++; 
        }
    }
    cout << partitions << endl; 
    return 0;
}