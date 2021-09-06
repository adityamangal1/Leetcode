#include <bits/stdc++.h>
using namespace std;

void Generate(int open, int close, string op, vector<string> &v)
{
    if (open == 0 && close == 0)
    {
        v.push_back(op);
        return;
    }

    if(open!=0){
        string op1 = op;
        op1.push_back('(');
        Generate(open - 1, close, op1, v);
    }
    if(close>open){
        string op2 = op;
        op2.push_back(')');
        Generate(open, close-1, op2, v);
    }

    return;
}

vector<string> BalancedBrackets(int n)
{
    vector<string> v;
    string op = "";
    int open = n;
    int close = n;
    Generate(open, close, op,v);

    return v;
}

int main()
{

    cout << "Enter the number:";
    int n;
    cin >> n;

    vector<string> result2 = BalancedBrackets(n);
    for (int i = 0; i < result2.size(); i++)
    {

        cout << result2[i];
        cout << endl;
    }

    return 0;
}