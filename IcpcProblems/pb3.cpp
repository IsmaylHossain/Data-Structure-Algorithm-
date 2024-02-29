#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int sum=n+m;
    string s1,s2;
    vector<pair<string,string>>v;
    while (sum--)
    {
        cin>>s1>>s2;
        v.push_back({s1,s2});
    }
    for (auto &&i : v)
    {
        
    }
    
    cout<<v.size()<<endl;
    return 0;
}