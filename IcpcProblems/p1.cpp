#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int>v(t);
     for (int i = 0; i < t; i++)
     {
        cin>>v[i];
     }
     long long num1=0,num2=0;
     int j=0,k=t-1;
     int p =1;
     while (j<=k)
     {
        long long num;
        if ((p%2!=0) || p==1)
     {  
        num=max(v[j],v[k]);
        num1+=num;
     }else if (p%2==0)
     {  
        num=max(v[j],v[k]);
        num2+=num;
     }
     if (num==v[j])
     {
        j++;
     }else{
        k--;
     }
     
     p++;
     }
     
     cout<<num1<<" "<<num2<<endl;

    return 0;
}
