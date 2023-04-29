class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> ch;
        char c;
        for (int i = 0; i < s.size(); i++)
        {
            c = s[i];
            if (c == '(' || c == '{' || c == '[')
            {
                ch.push(c);
            }
            else
            {
                if (!ch.empty())
                {
                    if ((c == ')' && ch.top() == '(') || (c == ']' && ch.top() == '[') || (c == '}' && ch.top() == '{'))
                    {
                        ch.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (ch.empty())
        {
            return true;
        }
        return false;
    }
};