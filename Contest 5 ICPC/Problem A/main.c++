#include <iostream>
#include <string>
using namespace std;
int main() {
   char problemChar;
   cin >> problemChar;

    char characters[] = {'B', 'D', 'A', 'L', 'C', 'G', 'K', 'J', 'F', 'E', 'H', 'I'};
    string colors[] = {"orange", "pink", "yellow", "blue", "black", "red", "white", "violet", "indigo", "green", "brown", "purple"};
    for (int i = 0; i < 12; ++i) {
        if (characters[i] == problemChar) {
            cout << colors[i] << endl;
            break;
        }
    }
    return 0;
}