#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,solve;
    string test;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        cin>>test;
         solve=0;
        for (int j='A' ;j<='Z';j++)
        {  
            int time=j-'A'+1;
            int count=0;
            for (int K=0;K<n;K++)
            {
               if (test[K]==j)
               {
                count++;
               }                    
            }
            if (count>=time)
            {
                solve++;
            }
            
        }
        cout<<solve<<endl;

    }
    return 0;
}