 #include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    long long a;
    cin >>a;
     
    for (long long i = 1; i <= a; i++)
    {
         if (stoll(to_string(i)+to_string(i))>a)
         {
             cout<<i-1<<endl;
             return 0;
         }    
               
    }
     
}