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
    int m=INT_MAX;
        for (int i = 0; i < t; i++)
        {
            if (arr[i]<m)
            {
                m=arr[i];
            }
             
        }
        int sm=INT_MAX;
         for (int i = 0; i <t; i++)
        {
            if(arr[i] == m) continue;
            if(arr[i] < sm)
            {
                sm = arr[i];
            }
             
        }
        cout<<sm<<endl;
         
     }   
     
     
