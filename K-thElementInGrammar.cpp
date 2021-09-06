#include <bits/stdc++.h>
using namespace std;

class Kelement
{
public:
    int grammar(int n, int k)
    {
        if (n == 1 && k == 1)
            return 0;
        int mid = pow(2, n - 1) / 2;
        if (k <= mid)
            return grammar(n - 1, k);
        else
            return !grammar(n - 1, k - mid);
    }
};

int main()
{
    int N;
    int K;
    cin >> N;
    cin >> K;

    Kelement ob;
    cout << ob.grammar(N, K) << endl;
}
