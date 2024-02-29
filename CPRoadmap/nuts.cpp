#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=0;
    cin >>a;
    for (int i = 0; i < a; i++)
    {
        int n;
        cin>>n;
        if (n>10)
        {
            sum+=n-10;
        }
        
    }
     cout<<sum<<endl;
    
}