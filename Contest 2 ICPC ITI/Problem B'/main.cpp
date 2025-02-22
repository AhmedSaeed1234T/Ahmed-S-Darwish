#include <iostream>
#include <vector>
using namespace std;
int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N; 
        int strength = 0, intelligence = 0; 
        int locationsVisited = 0; 
        for (int i = 0; i < N; i++) {
            int type;
            cin >> type;

            if (type == 1) {
                strength++;
                locationsVisited++;
            } else if (type == 2) {
                intelligence++;
                locationsVisited++;
            } else if (type == 3) {
                int enemyStrength, enemyIntelligence;
                cin >> enemyStrength >> enemyIntelligence; 
                if (strength >= enemyStrength && intelligence >= enemyIntelligence) {
                    locationsVisited++;
                    strength++;
                } else {
                    break;
                }
            }
        }
                cout << locationsVisited << endl;
    }

    return 0;
}