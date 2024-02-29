#include<bits/stdc++.h>
using namespace std;
int main(){
double a,b;
    cin>>a>>b;
     double dib=a/b,c,f,r;
     c=ceil(dib);
     f=floor(dib);
     r=round(dib);
     cout<<"floor "<<a<<" / " <<b <<" = "<<f<<"\n";
     cout<<"ceil "<<a<<" / " <<b <<" = "<<c<<"\n";
     cout<<"round "<<a<<" / " <<b <<" = "<<r<<"\n";
}