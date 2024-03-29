class Solution
{
public:
    int maxJump(vector<int> &stones)
    {
        int maxi = INT_MIN;
        int n = stones.size();
        vector<int> odd, even;
        if (n == 2 || n == 3)
            return stones[n - 1] - stones[0];
        odd.push_back(stones[0]);
        even.push_back(stones[0]);
        for (int i = 1; i < n - 1; i++)
        {
            if (i % 2 == 0)
                even.push_back(stones[i]);
            else
                odd.push_back(stones[i]);
        }
        odd.push_back(stones[n - 1]);
        even.push_back(stones[n - 1]);
        for (int i = 1; i < odd.size(); i++)
        {
            maxi = max(maxi, odd[i] - odd[i - 1]);
        }
        for (int i = 1; i < even.size(); i++)
        {
            maxi = max(maxi, even[i] - even[i - 1]);
        }
        return maxi;
    }
};