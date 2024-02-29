#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,sum1=0,sum=0,cnt=0,cnt2=0;
     cin >>a;
    long long arr[a];
    for (long long i = 0; i < a; i++)
    {
        long long n;
        cin>>n;

        arr[i]=n;  
        sum1+=n;  
    }
    cin>>b;
    long long cnt1=b/sum1;
    cnt=b%sum1;
    
        for (long long j = 0; j < a; j++)
        {
            sum+=arr[j];
            cnt2++;
            if (sum>cnt)
        {
            long long result=cnt1*a+cnt2;
            cout<<result<<endl;
            return 0;
        }
        }
                
    
     
}