#include <bits/stdc++.h>
using namespace std;

int SubsetSum(int arr[], int n, int sum)
{

    int t[n + 1][sum + 1];
    int k = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 && j > 0)
                t[i][j] = 0;
            if (j == 0 && i > 0)
                if (arr[i - 1] == 0)
                {
                    t[i][j] = pow(2, k);
                    k++;
                }
                else
                    t[i][j] = t[i - 1][j];
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

int Target(int arr[], int n, int diff)
{
    int sumArray = 0;
    for (int i = 0; i < n; i++)
    {
        sumArray += arr[i];
    }
    if ((sumArray + diff) % 2 != 0)
    {
        return 0;
    }
    else
        return SubsetSum(arr, n, (sumArray + diff) / 2);
}
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;

    // ? cout << "Yes\n" : cout << "No\n";
    // cout << Target(arr, n, sum);
    cout << SubsetSum(arr, n, sum);

    return 0;
}