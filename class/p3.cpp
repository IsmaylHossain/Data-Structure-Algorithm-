#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    int cnt=0,cnt1=0,r;
      for (int j = 0; j <t; j++)
     {
        for (int i = 0; i < t; i++)
        {
            if (arr[j]==arr[i])
            {
                cnt++;
            }   
        }
        if (cnt>cnt1)
        {
            cnt1=cnt;
            r=arr[j];

        } 
     }   
     cout<<r<<endl;
     
}