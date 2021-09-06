#include <bits/stdc++.h>
using namespace std;

int SubsetSum(int arr[], int n, int sum)
{

    int t[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            (arr[i - 1] <= j) ? t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j] : t[i][j] = t[i - 1][j];
        }
    }
    return t[n][sum];
}
signed main()
{
    int n;
    cout << "What is the size of array? ";
    cin >> n;
    int arr[n];
    cout << "Type the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "What is the sum? ";
    int sum;
    cin >> sum;

    cout << "There are " << SubsetSum(arr, n, sum) << " subset Which will result in sum of " << sum << ".";
    // ? cout << "Yes\n" : cout << "No\n";
    return 0;
}