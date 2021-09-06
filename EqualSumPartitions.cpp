#include <bits/stdc++.h>
using namespace std;
bool SubsetSum(int arr[], int n, int sum)
{

    bool t[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            // if (arr[i - 1] <= j)
            //     t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];

            // else
            //     t[i][j] = t[i - 1][j];
            // Secound way to right if else condition
            (arr[i - 1] <= j) ? t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j] : t[i][j] = t[i - 1][j];
        }
    }
    return t[n][sum];
}
bool equalPartition(int N, int arr[])
{

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    if (sum % 2 != 0)
        return false;

    return SubsetSum(arr, N, sum / 2);
}

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // SubsetSum(arr,4,11) ? cout << "Yes\n" : cout << "No\n";
    equalPartition(n, arr) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
