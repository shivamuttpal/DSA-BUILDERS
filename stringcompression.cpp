#include<bits/stdc++.h>
using namespace std;

vector<char> func(vector<char>&ch){
   map<char,int>mp;
    for(int i=0;i<ch.size();i++){
        mp[ch[i]]++;
    }
    vector<char> ans;
   map<char,int>:: iterator it;
    for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->first); 
            ans.push_back(it->second+'0'); 
    }
    return (ans);
}
int main()
{
vector<char>ch={'a','a','a','b','b','b'};
    
    vector<char> ans=func(ch);
    for(auto x:ans){
        cout<<x;
    }
    return 0;
}