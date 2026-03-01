#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minPartitions(string n)
    {
        int len = n.length();

        int greatDigit = 0;
        for (int i = 0; i < len; i++)
        {
            int i1 = n[i] - '0';
            if (i1 >= greatDigit)
            {
                greatDigit = i1;
            }
        }

        return greatDigit;
    }
};

int main()
{
    Solution obj;
    cout << obj.minPartitions("32") << endl;
    return 0;
}