#include <bits/stdc++.h>
using namespace std;

long long int t[1001][1001];

long long int Solve(int arr[], int m, int n)
{
    if (m == -1 && n > 0 || n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (t[m][n] != -1)
        return t[m][n];

    return t[m][n] = Solve(arr, m, n - arr[m]) + Solve(arr, m - 1, n);
}
long long int CoinChange(int arr[], int m, int n)
{
    memset(t, -1, sizeof(t));
    return Solve(arr, m - 1, n);
}

signed main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout << "Enter the sum: ";
    cin >> sum;
    cout << CoinChange(arr, n, sum);

    return 0;
}