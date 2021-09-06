#include <bits/stdc++.h>
using namespace std;

class EGG_DROP
{
public:
    int EggDrop(int e, int f)
    {
        int Egg[e + 1][f + 1];

        // base cases
        for (int i = 1; i <= e; i++)
        {
            // for 0 and 1 floor we need 0 and 1 trial
            Egg[i][0] = 0;
            Egg[i][1] = 1;
        }
        for (int j = 1; j <= f; j++)
        {
            // for 1 egg and j floor need j trials
            Egg[1][j] = j;
        }
        for (int i = 2; i <= e; i++)
        {
            for (int j = 2; j <= f; j++)
            {
                /* code */
                Egg[i][j] = INT_MAX;
                for (int k = 0; k <= j; k++)

                {
                    int res = 1 + max(Egg[i - 1][k - 1], Egg[i][j - k]);



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
    cout << "Enter the number of eggs and floors in single line-" << endl;
    cin >> e >> k;
    EGG_DROP ob;
    cout << ob.EggDrop(e, k);
}
