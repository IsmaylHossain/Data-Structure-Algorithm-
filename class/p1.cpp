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
    int m=arr[0];
        for (int i = 0; i < t-1; i++)
        {
            if (arr[i+1]>arr[i])
            {
                m=arr[i+1];
            }
             
        }
        cout<<m<<endl;
         
     }   
     
     
