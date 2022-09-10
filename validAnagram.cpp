#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{
    map<char, int> a;
    map<char, int> b;
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        b[t[i]]++;
    }
    if (a != b)
    {
        return false;
    }
    return true;
}
int main()
{

    return 0;
}