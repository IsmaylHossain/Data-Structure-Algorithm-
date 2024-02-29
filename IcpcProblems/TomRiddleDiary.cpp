#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int>map;
    vector<string>v;
    while (t--)
    {
        string s;
        cin>>s;
        v.push_back(s);
        
    }
    for (auto &&i : v)
    {
       map[i]++;
        if(map[i]>1){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        } 
    }
    

}