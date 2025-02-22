#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[20000001]; // Maximum length of the string is 2 * 10^7
    cin >> s;

    int operations = 0; // To count the number of operations
    int n = strlen(s); // Get the length of the string

    while (n > 0) {
        bool removed[26] = {false}; // To track which characters have been removed in this operation
        operations++;

        // Iterate through the string and mark the first occurrence of each character
        for (int i = 0; i < n; i++) {
            if (!removed[s[i] - 'a']) {
                removed[s[i] - 'a'] = true; // Mark the character as removed
                // Remove this character by shifting the rest of the string
                for (int j = i; j < n - 1; j++) {
                    s[j] = s[j + 1];
                }
                n--; // Decrease the length of the string
                i--; // Stay at the same index to check the next character
            }
        }
    }

    cout << operations << endl; // Output the number of operations
    return 0;
}