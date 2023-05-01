class Solution
{
public:
    int calPoints(vector<string> &op)
    {
        stack<string> s;
        for (int i = 0; i < op.size(); i++)
        {
            if (op[i] == "+")
            {
                string a = s.top();
                s.pop();
                string b = s.top();
                s.pop();
                int c = stoi(a);
                int d = stoi(b);
                int e = c + d;
                string f = to_string(e);
                s.push(b);
                s.push(a);
                s.push(f);
            }
            else if (op[i] == "C")
            {
                s.pop();
            }
            else if (op[i] == "D")
            {
                string a = s.top();
                int b = stoi(a);
                b = b * 2;
                string c = to_string(b);
                s.push(c);
            }
            else
            {
                s.push(op[i]);
            }
        }
        int ans = 0;
        while (s.size())
        {
            string a = s.top();
            int b = stoi(a);
            ans += b;
            s.pop();
        }
        return ans;
    }
};