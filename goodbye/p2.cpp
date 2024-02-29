#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long a,b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        long long k;
        if (a==1)
        {
           cout<<b*b<<endl;
        }else if (b%a==0)
        { 
            long long m=b/a;
            cout<<m*b<<endl;
        }else{
            for (long long j =2*b; ; j++)
        {
          if (j%a==0&&j%b==0)
        {
            cout<<j<<endl;
            break;
        }
        }          
        }
        
        
    }
    
    return 0;
}
