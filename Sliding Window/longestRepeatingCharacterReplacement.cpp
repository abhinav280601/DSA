#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int l = 0, r = 0;
        int Schar[26] = {0};
        int maxCount = 0;
        int maxLength = 0;
        while (r < s.size())
        {
            Schar[s[r] - 'A']++;
            int charCount = Schar[s[r] - 'A'];
            maxCount = max(maxCount, charCount);

            if (r - l - maxCount < k)
            {
                maxLength = max(maxLength, r - l + 1);
            }
            else
            {
                Schar[s[l] - 'A']--;
                l++;
            }
            r++;
        }
        return maxLength;
    }
};
int main()
{

    return 0;
}