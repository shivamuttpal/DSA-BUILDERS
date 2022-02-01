#include <bits/stdc++.h>
using namespace std;

vector<string> answer;
void permute(string s1, int idx)
{
    if (idx == s1.size())
    {
        answer.push_back(s1);
        return;
    }
    for (int i = idx; i < s1.size(); i++)
    {
        swap(s1[i], s1[idx]);
        permute(s1, idx + 1);
        swap(s1[i], s1[idx]);
    }
    return;
}
bool compare(vector<string> answer, string s2)
{
    for (int i = 0; i < answer.size(); i++)
    {
        if (strstr(s2.c_str(), answer[i].c_str()))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    permute(s1, 0);
    if (compare(answer, s2) == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}