#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=0;
    cin >>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        int n;
        cin>>n;
        arr[i]=n;
               
    }
    sort(arr,arr+a);
    for (int i = 0; i < a; i++)
    {
         if (arr[i]!=(i+1))
        {
            cout<<"No"<<endl;
            return 0;
        } 
    }
        
     cout<<"Yes"<<endl;
    
}