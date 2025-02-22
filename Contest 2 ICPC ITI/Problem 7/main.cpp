#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    vector<pair<int, int>> indices(N);
    for (int i = 0; i < N; ++i) {
        indices[i] = {i + 1, 0}; 
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (A[i][j] == 1) {
                indices[i].second++; 
            } else if (A[i][j] == -1) {
                indices[j].second++; 
            }
        }
    }

    sort(indices.begin(), indices.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first; 
        }
        return a.second > b.second; 
    });

    for (int i = 0; i < N; ++i) {
        cout << indices[i].first << " ";
    }
    cout << endl;

    return 0;
}