#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

bool IsPalindrome(string &str, int i, int j)
{

    if (i == j)
        return true;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int Solve(string &s, int i, int j)
{
    if (i >= j)
        return 0;
    else if (dp[i][j] != -1)
        return dp[i][j];
    else if (IsPalindrome(s, i, j))
    {
        dp[i][j] = 0;
        return 0;
    }
    int mn = INT_MAX;
    for (int k = i; k <= j; k++)
    {

        int right = 0;
        if (IsPalindrome(s, i, k))
        {
            right = Solve(s, k + 1, j);
        }
        else
        {
            dp[i][j] = 0;
            continue;
        }
        int temp = right + 1;
        mn = min(mn, temp);
    }
    return dp[i][j] = mn;
}
int Palindrome(string s)
{
    int n = s.length();
    dp.resize(n+1, vector<int>(n + 1, -1));
    return Solve(s, 0, n - 1);
}

signed main()
{
    string str;
    cin >> str;
    cout << Palindrome(str) <<" cuts needed for Palindrome partitioning of given string.";
} 