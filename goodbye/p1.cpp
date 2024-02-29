#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,count=0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    for (int i = 0; i < t; i++)
    {
        if (a[0]==a[i])
        {
            count+=1;
        }
        
    }
    if (count%2==0)
    {
        cout<<"Unlucky"<<endl;
    }else
    {
        cout<<"Lucky"<<endl;
    }
    
    
    
  
    return 0;
}
