#include <iostream>
#include <string>
using namespace std;
int main() {
    string S, P;
    int K;
    cin >> S >> P >> K;
    int lenghtS = S.length();
    int lenghtP = P.length();
    for (int i = 0; i <= lenghtS - lenghtP; i++) {
        int diff = 0;
        for (int j = 0; j < lenghtP; j++) {
            if (S[i + j] != P[j]) {
                diff++;
            }
        }
        if (diff <= K) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}