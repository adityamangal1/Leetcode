class Solution
{
public:
    int trap(vector<int> &height)
    {
        int res = 0;
        int n = height.size();
        if(n==0)
            return 0;
        vector<int> MaxLeft(n);
        vector<int> MaxRight(n);
        MaxLeft[0] = height[0];

        if (n == 0)
            return 0;
        for (int i = 1; i < n; i++)
            MaxLeft[i] = max(MaxLeft[i - 1], height[i]);
        MaxRight[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--)
            MaxRight[i] = max(height[i], MaxRight[i + 1]);

        for (int i = 0; i < n; i++)
            res += min(MaxLeft[i], MaxRight[i]) - height[i];

        return res;
    }
};