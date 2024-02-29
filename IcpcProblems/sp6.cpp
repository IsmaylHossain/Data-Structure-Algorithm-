#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s1,s2;
    set<pair<string,string>>pair;
    while (t--)
    {
        cin>>s1>>s2;
        pair.insert({s1,s2});
    }
    cout<<pair.size()<<endl;
    return 0;
}