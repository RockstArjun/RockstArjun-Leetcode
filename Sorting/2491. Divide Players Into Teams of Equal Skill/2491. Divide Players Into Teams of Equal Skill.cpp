class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        vector<long long> v;
        long long res = 0;
        sort(skill.begin(), skill.end());
        for (int i = 0; i < skill.size() / 2; i++)
        {
            v.push_back(skill[i] + skill[skill.size() - i - 1]);
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                return -1;
            }
        }
        for (int i = 0; i < skill.size() / 2; i++)
        {
            v[i] = skill[i] * skill[skill.size() - i - 1];
        }
        for (int i = 0; i < v.size(); i++)
        {
            res += v[i];
        }
        return res;
    }
};