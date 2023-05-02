class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int n = 0;
        sort(nums.begin(), nums.end());
        for (auto x : nums)
        {
            if (x == 0)
            {
                return 0;
            }
            if (x < 0)
            {
                n++;
            }
        }

        if (n % 2 == 0)
        {
            return 1;
        }
        return -1;
    }
};