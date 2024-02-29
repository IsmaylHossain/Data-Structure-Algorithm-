#include<bits/stdc++.h>
using namespace std;

  void num(int t,int n){
        cout<<n<<" ";
        if (t==0)
        {
            return;
            
        }
        
        
        num(t-1,n+1);
        
     }

int main() {
    int t,n=0;
    cin >> t;
   num(t,n);
    return 0;
}
