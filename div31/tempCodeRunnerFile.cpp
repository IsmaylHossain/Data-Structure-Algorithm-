#include <bits/stdc++.h>
 using namespace std;

int main() {
    long long  n,m, Q;
    string S;
    cin >> Q;

    while (Q--) {
        
        cin >> n >> m;
        deque<long long> arr;
        for (long long i = 0; i < n; i++)
        {
            long long a;
            cin>>a;
            arr.push_back(a);
            
        }

        cin>>S;
        
        

        for (long long i = 0; i < n; i++)
        {
             long long sum=1;
            for (auto &&i : arr)
        {
            sum=sum*i;
        }
        long long mud=sum%m;
             cout<< mud<<" ";

            if (S[i]=='L')
            {
                arr.pop_front();
            
            }else  
            {
                arr.pop_back();
            
            } 
            
            
        }cout<<endl;
         
    }

    return 0;
}
