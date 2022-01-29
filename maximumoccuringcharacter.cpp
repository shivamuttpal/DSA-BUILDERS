#include<bits/stdc++.h>
using namespace std;

char maximumoccuringchar(string s){
    map<char,int>mp;

    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int max=INT_MIN;
    char letter;
    for(auto x:mp){
        if(x.second>max){
            max=x.second;
            letter=x.first;
        }
    }
    return letter;
}
int main()
{
    string s;
    cin>>s;
    char ch=maximumoccuringchar(s);
    cout<<ch<<endl;
    return 0;
}