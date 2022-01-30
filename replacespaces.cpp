#include <bits/stdc++.h>
using namespace std;

vector<char> replaceSpaces(string str)
{
    string s1 = "@40";

    vector<char> ch;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == 32)
        {

            str.replace(i,1, s1);
        }
        ch.push_back(str[i]);
    }

    return ch;
}
int main()
{
    string s;
    getline(cin,s);
    vector<char> ans=replaceSpaces(s);
    for(auto x:ans){
        cout<<x;
    }
    return 0;
}