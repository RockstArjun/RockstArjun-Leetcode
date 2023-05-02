class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int sum = 0, i = 0, j = height.size() - 1;
        while (i < j)
        {
            if (height[i] < height[j])
            {
                sum = max(sum, (j - i) * height[i]);
                i++;
            }
            else
            {
                sum = max(sum, (j - i) * height[j]);
                j--;
            }
        }
        return sum;
    }
};