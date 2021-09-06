//Given an integer N denoting the Length of a line segment.You need to cut the line segment in such a way that the cut length of a line segment each time is either x, y or z.Here x, y, and z are integers.After performing all the cut operations, your total number of cut segments must be maximum. Input : N = 4 x = 2,y=1
#include <bits/stdc++.h>
using namespace std;

class ROD_CUTTING
{
public:
    int dp[100005];
    int Func(int n, int x, int y, int z)
    {
        if (n == 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];
        int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
        if (n >= x)
            op1 = Func(n - x, x, y, z);
        if (n >= y)
            op2 = Func(n - y, x, y, z);
        if (n >= z)
            op3 = Func(n - z, x, y, z);
        return dp[n] = 1 + max(op1, max(op2, op3));
    }
    int RodCutting(int n, int x, int y, int z)
    {

        memset(dp, -1, sizeof(dp));

        int a = Func(n, x, y, z);
        if (a == 0)
            return 0;
        return a;
    }
};
