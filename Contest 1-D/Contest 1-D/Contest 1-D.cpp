// Contest 1-D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    long long num1, num2, num3, result,result1,result2,result3,result4,result5,result6;
    cin >> num1 >> num2 >> num3 >> result;
    result1 = num1 * num2 + num3;
    result2 = num1 * num2 - num3;
    result3 = num1 + num2 * num3;
    result4 = num1 + num2 - num3;
    result5 = num1 - num2 * num3;
    result6 = num1 - num2 + num3;
    if (result == result1 || result == result2 || result == result3 || result == result4 || result == result5 || result == result6)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
