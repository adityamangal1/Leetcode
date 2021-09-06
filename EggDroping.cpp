#include <bits/stdc++.h>
using namespace std;

class EGG_DROP
{
public:
    int EggDrop(int e, int f)
    {
        int Egg[e + 1][f + 1];

        // For 0 and 1 floor we need 0 and 1 trials
        for (int i = 1; i <= e; i++)
        {
            Egg[i][0] = 0;
            Egg[i][1] = 1;
        }
        // For 1 egg we need j trials for j floors
        for (int j = 1; j <= f; j++)
        {
            Egg[1][j] = j;
        }

        for (int i = 2; i <= e; i++)
        {
            for (int j = 2; j <= f; j++)
            {
                Egg[i][j] = INT_MAX;
                for (int k = 1; k <= j; k++)
                {
                    int res = 1 + max(Egg[i - 1][k - 1], Egg[i][j - k]);
                    if (res < Egg[i][j])
                        Egg[i][j] = res;
                }
            }
        }
        return Egg[e][f];
    }
};

int main()
{
    int e;
    int k;
    cout << "Enter the number of eggs and floors in single line-"<<endl;
    cin >> e >> k;
    EGG_DROP ob;
    cout << ob.EggDrop(e, k);
}
