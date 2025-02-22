#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    unordered_map<int, int> primeFactorCount;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        int num = A[i];
        int count = 0;
        while (num % 2 == 0)
        {
            count++;
            num /= 2;
        }
        for (int j = 3; j <= sqrt(num); j += 2)
        {
            while (num % j == 0)
            {
                count++;
                num /= j;
            }
        }
        if (num > 2)
        {
            count++;
        }
        primeFactorCount[count]++;
        maxCount = max(maxCount, count);
    }
    if (primeFactorCount[maxCount] == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}