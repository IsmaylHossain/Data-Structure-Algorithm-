#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >>a>>b>>c;
    int div=a/c;
    if ((c*(div+1))<=b)
    {
       cout<<(c*(div+1))<<endl;
    }else { cout<<-1<<endl;}
    
}