#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    string s="aeiou";
    int cnt1=0,cnt2=0,cnt3=0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s.find(s1[i])!= string::npos){
            cnt1++;
        }
    }
    for (int j = 0; j < s2.size(); j++)
    {
        if(s.find(s2[j])!= string::npos){
            cnt2++;
        }
    }
    for (int k = 0; k < s3.size(); k++)
    {
        if(s.find(s3[k])!= string::npos){
            cnt3++;
        }
    }
    
    if (cnt1==5 && cnt2==7 && cnt3==5)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
    
}