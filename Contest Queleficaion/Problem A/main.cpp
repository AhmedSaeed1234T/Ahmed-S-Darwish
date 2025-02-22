#include <iostream>
#include <string>
using namespace std;
int main() {
    string S1, S2;
    cin >> S1 >> S2;
    bool isBeautiful = false;
    for (int i = 0; i < S1.length(); i++) {
        for (int j = 0; j < S2.length(); j++) {
            if (S1[i] == S2[j]) {
                isBeautiful = true;
                break;
            }
        }
        if (isBeautiful) break; 
    }
    if (isBeautiful)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}