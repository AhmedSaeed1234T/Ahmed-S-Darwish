// Contest [ Array , String , Loops] ICPC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    long long  n, m;
    cin >> n >> m;

    char maze[101][101]; 
    int ax = -1, ay = -1, hx = -1, hy = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> maze[i][j];
            if (maze[i][j] == 'A') {
                ax = i;
                ay = j;
            }
            if (maze[i][j] == 'H') {
                hx = i;
                hy = j;
            }
        }
    }
    double distance = ((hx - ax) * (hx - ax) + (hy - ay) * (hy - ay));
    cout << fixed << setprecision(4) << sqrt(distance) << endl;

    return 0;
}
    //int num;
    //cin >> num;

    //while (num--) {
    //    int a;
    //    cin >> a;
    //    char s[1000];
    //    cin >> s;
    //    if (s[0] == 'B' && s[a - 1] == 'B')     // first and last options
    //    {
    //        bool isok = true;
    //        for (int i = 1; i < (a - 1); ++i) {
    //            if (s[i] != 'T'  && s[i] != 'C' && (s[i] != 'L') ) {
    //                isok = false;
    //                break;
    //            }
    //        }
    //        if (isok) {
    //            cout << "YES" << endl;
    //        }
    //        else {
    //            cout << "NO" << endl;
    //        }
    //    }
    //    else {
    //        cout << "NO" << endl;
    //    }
    //}

    

    /*int num;
    cin >> num;

    while (num--) {
        int n;
        cin >> n;

        int candies[100];
        int sum_even = 0, sum_odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> candies[i];
            if (candies[i] % 2 == 0) {
                sum_even += candies[i];
            }
            else {
                sum_odd += candies[i];
            }
        }

        if (sum_even > sum_odd) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
