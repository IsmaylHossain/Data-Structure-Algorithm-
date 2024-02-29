#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n-i-1; j++)
    {   
        int temp;
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
    }
    
    
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k];
    }
    
    return 0;
    
}