#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> minCosts(n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        minCosts[i] = a + b;
        minCosts[i] = min(minCosts[i], a + c);
        minCosts[i] = min(minCosts[i], b + c);
    }

    sort(minCosts.begin(), minCosts.end());

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int count = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (sum + minCosts[j] <= x)
            {
                sum += minCosts[j];
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
