#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string sum1, sum2;
    for (int i = 0; i < s1.size(); i++)
    {
        sum1=tolower(s1[i]);
        sum2=tolower(s2[i]);
    if (sum1<sum2){
        cout<<-1<<endl;
        return 0; 
    }else if (sum1>sum2){ 
    cout<<1<<endl;
        return 0; 
    }  
        
    } 
    cout<<0<<endl;
    return 0;  
    
}