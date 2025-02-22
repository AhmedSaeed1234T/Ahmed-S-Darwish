#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> arr(N);
    vector<int> indices(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
        indices[i] = i + 1;
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i].first == arr[j].first && i < j) {
                swap(arr[i], arr[j]);
            }
        }
    }
    sort(arr.begin(), arr.end(), greater<pair<int, int>>());
    for (int i = 0; i < N; i++) {
        indices[arr[i].second - 1] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << indices[i] << " ";
    }

    return 0;
}