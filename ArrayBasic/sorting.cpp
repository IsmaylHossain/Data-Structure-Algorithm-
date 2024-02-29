#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n-i-1; j++)
    {   
        int temp;
        if (A[j]>A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
        
    }
    }
    
    
    for (int k = 0; k < n; k++)
    {
        cout<<A[k]<<" ";
    }
    
    return 0;
    
}