#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int A[1003]; 
    int count[100001] = {0}; 

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i]]++; 
    }

    int max_i = -1, max_j = -1;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[j] > A[i] && count[A[i]] > count[A[j]]) {
                if (i > max_i || (i == max_i && j > max_j)) {
                    max_i = i;
                    max_j = j;
                }
            }
        }
    }

    if (max_i == -1) {
        cout << -1 << endl;
    } else {
        cout << max_i + 1 << " " << max_j + 1 << endl; 
    }

    return 0;
}