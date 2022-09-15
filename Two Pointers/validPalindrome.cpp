#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        vector<char> ch;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
            {
                ch.push_back(s[i]);
            }
            if (s[i] >= 65 && s[i] <= 90)
            {
                ch.push_back(tolower(s[i]));
            }
        }

        int i = 0;
        int j = ch.size() - 1;
        while (i < j)
        {
            if (ch[i] != ch[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
int main()
{

    return 0;
}