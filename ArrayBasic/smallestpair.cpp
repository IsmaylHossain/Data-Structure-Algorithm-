#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int arr[n];
        int small_sum=INT_MAX;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];

        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j=i+1; j < n; j++)
        {
            int sum=arr[i]+arr[j]+(j+1)-(i+1);
             
            if (sum<small_sum)
            {
                small_sum=sum;
            }
            
        }
        }
        
        cout<<small_sum<<endl;
        
    }
    
}