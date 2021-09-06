#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

int Solve(int arr[], int i, int j)
{
    if (i >= j)
        return 0;
    if (t[i][j] != -1)
        return t[i][j];

    int ans = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int temp_ans = Solve(arr, i, k) + Solve(arr, k + 1, j) + arr[i - 1] * arr[j] * arr[k];
        ans = min(ans, temp_ans);
    }

    return t[i][j] = ans;
}
int MatrixChain(int arr[], int n)
{
    memset(t, -1, sizeof(t));
    int ans = Solve(arr, 1, n - 1);
    return ans;
}

signed main()
{
    int n;
    cout << "Enter the size of Matrix: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Matrix: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << MatrixChain(arr, n);

    return 0;
}