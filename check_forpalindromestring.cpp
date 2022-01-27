#include <bits/stdc++.h>
using namespace std;

char to_lowercase(char s)
{
    if ((s >= 'a' && s <= 'z') || (s >= 0 && s <= 9))
    {
        return s;
    }
    else
    {
        char temp = s - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(string s)
{
    int t = s.size();
    int st = 0;
    int en = t - 1;
    while (st <= en)
    {
        if (to_lowercase(s[st]) != to_lowercase(s[en]))
        {
            return false;
        }
        else
        {
            st++;
            en--;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if (checkpalindrome(s)==true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

