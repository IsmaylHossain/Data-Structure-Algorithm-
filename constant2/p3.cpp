#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
        }
        long long s=sqrt(sum);
        long long m=s*s;
          if (m==sum)
          {
            cout<<"YES"<<endl;
          }else
          {
            cout<<"NO"<<endl;
          }
           
    }
    return 0;
}
