#include <bits/stdc++.h>
using namespace std;


int joshephus(int n, int k){

    if(n==1)
        return 1;
    else
        // n-1 for every single person killed
        // we have to skip k-1 person
        return (joshephus(n - 1, k) + k - 1) % n + 1;

}

int main()
{

    int n = 4;
    int k = 2;

    int ans = joshephus(n, k);
    cout << ans;
}