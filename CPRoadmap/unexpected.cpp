 #include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll a,cnt=0;
    cin >>a;
    unordered_set<ll>set;
     for (ll j = 2; j*j <= a; j++)
     {
     
    for (long long i = 2; i <= a; i++)
    {
        ll m=pow(j,i);
          
         if (m<=a)
         {
            set.insert(m);
             
         }else break;
               
    }
     }
         cout<<a-set.size()<<endl;
         return 0;
    
}