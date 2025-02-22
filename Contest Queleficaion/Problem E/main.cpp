#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(9, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
                if (j - k >= 0)
                {
                    dp[i][j] += dp[i - 1][j - k];
                }
            }
        }
    }
    cout << dp[n][8] << endl;

    return 0;
}