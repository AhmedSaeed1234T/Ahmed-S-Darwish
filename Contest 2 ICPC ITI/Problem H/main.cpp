#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[1003][1003];
    int score[1003] = {0};
    int indices[1003];
    for (int i = 0; i < n; i++) {
        indices[i] = i + 1;
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                score[i]++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (score[j] < score[j + 1] || (score[j] == score[j + 1] && indices[j] > indices[j + 1])) {
                int temp_score = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp_score;
                
                int temp_index = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = temp_index;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;
    
    return 0;
}
